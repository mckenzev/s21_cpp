#include "s21_matrix_oop.h"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>

S21Matrix::S21Matrix() noexcept = default;

S21Matrix::S21Matrix(int rows, int cols) : matrix_(rows, cols) {
  if (rows < 1 || cols < 1) {
    throw std::invalid_argument("Invalid number of columns or rows");
  }
}

S21Matrix::S21Matrix(const S21Matrix& other)
    : matrix_(other.matrix_) {}

S21Matrix::S21Matrix(S21Matrix&& other) noexcept
    : matrix_(std::exchange(other.matrix_, {})) {}

S21Matrix& S21Matrix::operator=(const S21Matrix& other) {
  if (this != &other) {
    RawMatrix new_matrix(other.matrix_);
    matrix_.Swap(new_matrix);
  }

  return *this;
}

S21Matrix& S21Matrix::operator=(S21Matrix&& other) noexcept {
  if (this != &other) {
    matrix_.Swap(other.matrix_);
  }

  return *this;
}

bool S21Matrix::EqMatrix(const S21Matrix& other) const noexcept {
  // Попытка сравнить себя с собой всегда успешна
  if (this == &other) {
    return true;
  }

  // Равными могут быть матрицы одинакового размера
  if (GetCols() != other.GetCols() || GetRows() != other.GetRows()) {
    return false;
  }

  for (int i = 0; i < GetRows(); ++i) {
    // Текущая строка (чтобы при каждой итерации по j при неизменном i много раз не пересоздавать Row)
    const auto this_row = matrix_[i];
    const auto other_row = other.matrix_[i];
    for (int j = 0; j < GetCols(); ++j) {
      // При модуле разницы значений большем чем EPS делается вывод о различии значений матриц
      if (std::abs(this_row[j] - other_row[j]) > EPS) {
        return false;
      }
    }
  }

  // Если до этого момента не было сомнений в равенстве матриц, считается, что матрицы равны
  return true;
}

template <typename Func>
void S21Matrix::SimpleMatrixTransformation(const S21Matrix& other, Func func) {
  if (GetRows() != other.GetRows() || GetCols() != other.GetCols()) {
    throw std::logic_error("The matrices differ in size");
  }

  // total_size при пустой матрице итак будет 0, но при пустой матрице не получится получить первый элемент по нулевому указателю (&matrix_[0][0])
  if (matrix_.IsEmpty()) {
    return;
  }

  // Зная, что матрица построенна на одномерном массиве, можно без вложенных циклов пройтись от matrix[0][0] до total_size
  size_t total_size = matrix_.GetColsCount() * matrix_.GetRowsCount();
  double* this_matrix = &matrix_[0][0];
  const double* other_matrix = &other.matrix_[0][0];
  
  std::transform(this_matrix, this_matrix + total_size, other_matrix, func);
}

void S21Matrix::SumMatrix(const S21Matrix& other) {
  SimpleMatrixTransformation(other, [](double& lhs, double rhs) {
    lhs += rhs;
  });
}

void S21Matrix::SubMatrix(const S21Matrix& other) {
  SimpleMatrixTransformation(other, [](double& lhs, double rhs) {
    lhs -= rhs;
  });
}

void S21Matrix::MulNumber(const double num) noexcept {
  if (matrix_.IsEmpty()) {
    return;
  }

  size_t total_size = matrix_.GetColsCount() * matrix_.GetRowsCount();
  double* begin = &matrix_[0][0];
  double* end = begin + total_size;

  while (begin != end) {
    *begin *= num;
    ++begin;
  }
}

void S21Matrix::MulMatrix(const S21Matrix& other) {
  if (GetCols() != other.GetRows()) {
    throw std::logic_error("Incorrect matrix");
  }
  
  const int rows = GetRows();
  const int cols = other.GetCols();
  const int common = GetCols();

  RawMatrix new_matrix(rows, cols);

  for (int i = 0; i < rows; i++) {
    auto result_row = new_matrix[i];
    auto this_row = matrix_[i];
    for (int k = 0; k < common; k++) {
      auto other_row = other.matrix_[k];
      for (int j = 0; j < cols; j++) {
        result_row[j] += this_row[k] * other_row[j];
      }
    }
  }

  matrix_.Swap(new_matrix);
}

S21Matrix S21Matrix::Transpose() const {
  S21Matrix new_matrix(GetCols(), GetRows());
  for (int i = 0; i < GetRows(); i++) {
    const auto this_row = matrix_[i];
    for (int j = 0; j < GetCols(); j++) {
      new_matrix.matrix_[j][i] = this_row[j];
    }
  }
  return new_matrix;
}

S21Matrix S21Matrix::CalcComplements() {
  if (GetCols() != GetRows()) {
    throw std::logic_error("Rows are not equal to columns");
  }
  
  if (GetCols() < 2) {
    throw std::logic_error("The number of rows in the matrix is less than 2");
  }

  S21Matrix res(GetRows(), GetCols());
  for (int i = 0; i < GetRows(); i++) {
    for (int j = 0; j < GetCols(); j++) {
      S21Matrix tmp(GetRows() - 1, GetCols() - 1);
      int sign = (i + j) % 2 ? -1 : 1;
      for (int k = 0; k < tmp.GetRows(); k++) {
        for (int l = 0; l < tmp.GetCols(); l++) {
          int onePlus = k >= i ? 1 : 0;
          int secPlus = l >= j ? 1 : 0;
          tmp.matrix_[k][l] = matrix_[k + onePlus][l + secPlus];
        }
      }
      res.matrix_[i][j] = sign * tmp.Determinant();
    }
  }
  return res;
}

double S21Matrix::Determinant() {
  if (GetRows() != GetCols()) {
    throw std::logic_error("Rows are not equal to columns");
  }

  if (GetRows() == 1) {
    return matrix_[0][0];
  }

  if (GetRows() == 2) {
    return matrix_[0][0] * matrix_[1][1] - matrix_[0][1] * matrix_[1][0];
  }

  double result = 0;
  for (int i = 0; i < GetRows(); i++) {
    S21Matrix tmp(GetRows() - 1, GetCols() - 1);
    
    for (int j = 0; j < tmp.GetRows(); j++) {
      for (int k = 0; k < tmp.GetCols(); k++) {
        int plus = k >= i ? 1 : 0;
        tmp.matrix_[j][k] = matrix_[j + 1][k + plus];
      }
    }

    double det = tmp.Determinant();
    int sign = i % 2 ? -1 : 1;
    result += matrix_[0][i] * det * sign;
  }
  return result;
}

S21Matrix S21Matrix::InverseMatrix() {
  double det = Determinant();
  
  if (std::abs(det) < EPS) {
    throw std::invalid_argument("The matrix cannot be inverted");
  }

  S21Matrix res(GetRows(), GetCols());
  if (GetCols() == 1) {
    res.matrix_[0][0] = 1 / matrix_[0][0];
  } else {
    res = CalcComplements();
    res = res.Transpose();
    res.MulNumber(1 / det);
  }

  return res;
}

int S21Matrix::GetRows() const {
  return matrix_.GetRowsCount();
}

int S21Matrix::GetCols() const {
  return matrix_.GetColsCount();
}

void S21Matrix::SetRows(int new_rows) {
  if (new_rows < 1) {
    throw std::invalid_argument("Invalid value");
  }

  RawMatrix new_matrix(new_rows, GetCols());
  int minRows = new_rows < GetRows() ? new_rows : GetRows();
  for (int i = 0; i < minRows; i++) {
    auto news_row = new_matrix[i];
    auto cur_row = matrix_[i]; 
    for (int j = 0; j < GetCols(); j++) {
      news_row[j] = cur_row[j];
    }
  }
  matrix_.Swap(new_matrix);
}

void S21Matrix::SetCols(int new_cols) {
  if (new_cols < 1) {
    throw std::invalid_argument("Invalid value");
  }

  RawMatrix new_matrix(GetRows(), new_cols);
  int minCols = new_cols < GetCols() ? new_cols : GetCols();
  for (int i = 0; i < GetRows(); i++) {
    auto news_row = new_matrix[i];
    auto cur_row = matrix_[i];
    for (int j = 0; j < minCols; j++) {
      news_row[j] = cur_row[j];
    }
  }
  matrix_.Swap(new_matrix);
}

S21Matrix S21Matrix::operator+(const S21Matrix& other) const {
  S21Matrix newMatrix(*this);
  newMatrix.SumMatrix(other);
  return newMatrix;
}

S21Matrix S21Matrix::operator-(const S21Matrix& other) const {
  S21Matrix newMatrix(*this);
  newMatrix.SubMatrix(other);
  return newMatrix;
}

S21Matrix S21Matrix::operator*(const S21Matrix& other) const {
  S21Matrix newMatrix(*this);
  newMatrix.MulMatrix(other);
  return newMatrix;
}

S21Matrix S21Matrix::operator*(const double num) const {
  S21Matrix newMatrix(*this);
  newMatrix.MulNumber(num);
  return newMatrix;
}

S21Matrix& S21Matrix::operator+=(const S21Matrix& other) {
  SumMatrix(other);
  return *this;
}

S21Matrix& S21Matrix::operator-=(const S21Matrix& other) {
  SubMatrix(other);
  return *this;
}

S21Matrix& S21Matrix::operator*=(const S21Matrix& other) {
  MulMatrix(other);
  return *this;
}

S21Matrix& S21Matrix::operator*=(const double num) {
  MulNumber(num);
  return *this;
}

bool S21Matrix::operator==(const S21Matrix& other) const noexcept {
  return EqMatrix(other);
}

S21Matrix operator*(double number, S21Matrix& other) {
  S21Matrix tmp(other);
  tmp *= number;
  return tmp;
}

double S21Matrix::operator()(int row, int col) const {
  if ((row >= GetRows()) || (col >= GetCols()) || (row < 0) || (col < 0)) {
    throw std::out_of_range("Beyond the matrix.");
  }

  return matrix_[row][col];
}

double& S21Matrix::operator()(int row, int col) {
  if ((row >= GetRows()) || (col >= GetCols()) || (row < 0) || (col < 0)) {
    throw std::out_of_range("Beyond the matrix.");
  }

  return matrix_[row][col];
}