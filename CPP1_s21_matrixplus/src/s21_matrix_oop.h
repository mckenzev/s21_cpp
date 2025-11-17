#pragma once

#include <cstdint>
#include <cstring>
#include <cassert>
#include <forward_list>

#include <utility>

class RawMatrix {
public:
  class Row {
  public:
    double& operator[](uint32_t col_id) noexcept {
      assert(col_id < size_);
      return start_ptr_[col_id];
    }

    const double& operator[](uint32_t col_id) const noexcept {
      assert(col_id < size_);
      return start_ptr_[col_id];
    }

  private:
    double* start_ptr_;
    uint32_t size_;

    friend RawMatrix;

    Row(double* start_ptr, uint32_t size) noexcept
    : start_ptr_(start_ptr), size_(size) {}
  };

  RawMatrix() noexcept = default;
  // Инициализация нулями
  explicit RawMatrix(uint32_t rows, uint32_t cols)
  : data_(new double[cols * rows]()),
    rows_(rows),
    cols_(cols) {}

  // Выделение памяти с копированием содержимого матрицыe other
  RawMatrix(const RawMatrix& other)
  : rows_(other.rows_), cols_(other.cols_) {
    data_ = new double[cols_ * rows_];
    std::memcpy(data_, other.data_, cols_ * rows_ * sizeof(double));
  }
  
  RawMatrix(RawMatrix&& other)
  : data_(std::exchange(other.data_, nullptr)),
    rows_(std::exchange(other.rows_, 0)),
    cols_(std::exchange(other.cols_, 0)) {}

  ~RawMatrix() {
    delete[] data_;
  }

  RawMatrix& operator=(const RawMatrix& other) {
    if (this != &other) {
      RawMatrix tmp(other);
      Swap(tmp);
    }

    return *this;
  }

  RawMatrix& operator=(RawMatrix&& other) noexcept {
    if (this != &other) {
      RawMatrix tmp(std::move(other));
      Swap(tmp);
    }

    return *this;
  }

  void Swap(RawMatrix& other) noexcept {
    std::swap(data_, other.data_);
    std::swap(rows_, other.rows_);
    std::swap(cols_, other.cols_);
  } 

  uint32_t GetColsCount() const noexcept {
    return cols_;
  }

  uint32_t GetRowsCount() const noexcept {
    return rows_;
  }

  Row operator[](uint32_t row_id) noexcept {
    assert(row_id < rows_);
    return Row(data_ + (cols_ * row_id), cols_);
  }

  const Row operator[](uint32_t row_id) const noexcept {
    // Неконстантный метод не меняет состояние класса, но имеет неприятные вычисления, которые не хотелось бы дублировать
    // т.о. при const_cast вызывается неконстантная версия оператора, но создается константная версия строки
    return const_cast<RawMatrix*>(this)->operator[](row_id);
  }

  bool IsEmpty() const noexcept {
    return rows_ == 0 || cols_ == 0;
  }

private:
  double* data_ = nullptr;
  uint32_t rows_ = 0;
  uint32_t cols_ = 0;
};

class S21Matrix {
public:
  inline static constexpr double EPS = 1e-7;

  S21Matrix() noexcept;
  explicit S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix& other);
  S21Matrix(S21Matrix&& other) noexcept;
  S21Matrix& operator=(const S21Matrix& other);
  S21Matrix& operator=(S21Matrix&& other) noexcept;

  bool EqMatrix(const S21Matrix& other) const noexcept;
  void SumMatrix(const S21Matrix& other);
  void SubMatrix(const S21Matrix& other);
  void MulNumber(const double num) noexcept;
  void MulMatrix(const S21Matrix& other);
  S21Matrix Transpose() const;
  S21Matrix CalcComplements();
  S21Matrix InverseMatrix();
  double Determinant();

  int GetRows() const;
  int GetCols() const;
  void SetRows(int new_rows);
  void SetCols(int new_cols);

  S21Matrix operator+(const S21Matrix& other) const;
  S21Matrix operator-(const S21Matrix& other) const;
  S21Matrix operator*(const S21Matrix& other) const;
  S21Matrix operator*(const double num) const;

  S21Matrix& operator+=(const S21Matrix& other);
  S21Matrix& operator-=(const S21Matrix& other);
  S21Matrix& operator*=(const S21Matrix& other);
  S21Matrix& operator*=(const double num);

  bool operator==(const S21Matrix& other) const noexcept;

  friend S21Matrix operator*(double number, S21Matrix& other);
  double operator()(int row, int col) const;
  double& operator()(int row, int col);

 private:
  RawMatrix matrix_;

  template <typename Func>
  void SimpleMatrixTransformation(const S21Matrix& other, Func func);
};