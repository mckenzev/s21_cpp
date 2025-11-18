#ifndef VIEWER_V_2_0_SRC_MODEL_MODEL_CC
#define VIEWER_V_2_0_SRC_MODEL_MODEL_CC

#include "model.h"

#include <algorithm>
#include <fstream>
#include <sstream>

namespace s21 {

bool Model::Parse() {
  if (filename_.empty()) {
    return false;
  }

  CleanVectors();  // Очистка с прошлого использования

  if (!CountingLines()) {
    return false;
  }

  MemoryAllocation();  // Резервация памяти под новые вектора

  if (!ReadingData()) {
    return false;
  }

  Normalization();
  FillingCoords();

  return true;
}

void Model::CleanVectors() {
  vertices_.clear();
  vertices_.shrink_to_fit();

  faces_.clear();
  faces_.shrink_to_fit();

  coordinates_.clear();
  coordinates_.shrink_to_fit();

  faces_count_ = 0;
  vertices_count_ = 0;
}

void Model::MemoryAllocation() {
  // Умножение на 3 т.к. положение в 3-х осях
  vertices_.reserve(vertices_count_ * 3);
  // Умножение на 2, так как линия состоит из 2-х точек
  faces_.reserve(faces_count_ * 2);
  // Умножение на 2 как в faces_, умножение на 3 как у vertices_
  coordinates_.resize(faces_count_ * 2 * 3);
}

bool Model::CountingLines() {
  std::ifstream file(filename_);

  if (!file.is_open()) {
    return false;
  }

  std::string line;

  while (std::getline(file, line)) {
    if (line[0] == 'v' && line[1] == ' ') {
      ++vertices_count_;
    } else if (line[0] == 'f') {
      CountingFaces(line);
    }
  }

  return true;
}

void Model::CountingFaces(const std::string& line) {
  std::istringstream iss(line);
  std::string token;
  // Первый токен отбрасывается, т.к. будет равен "f"
  iss >> token;
  while (iss >> token) {
    ++faces_count_;
  }
}

template <typename T>
T Model::ParseStrTo(const std::string& str) {
  std::string tmp = str;
  size_t pos = tmp.find(",");

  if (pos != std::string::npos) {
    tmp[pos] = '.';
  }

  std::istringstream iss(tmp);
  T result;
  iss >> result;

  return result;
}

bool Model::ReadingData() {
  std::ifstream file(filename_);

  if (!file.is_open()) {
    return false;
  }

  vertices_count_ = 0;

  std::string line;
  while (std::getline(file, line)) {
    if (line[0] == 'v' && line[1] == ' ') {
      VerticesProcessing(line);
    } else if (line[0] == 'f') {
      FacesProcessing(line);
    }
  }

  if (vertices_.size() == 0 || faces_.size() == 0) {
    return false;
  }

  return true;
}

void Model::VerticesProcessing(const std::string& line) {
  std::istringstream iss(line);
  std::string token;
  double number = 0.0;
  // Первый токен отбрасывается, т.к. будет равен "v"
  iss >> token;

  while (iss >> token) {
    number = ParseStrTo<double>(token);
    vertices_.push_back(number);
  }

  ++vertices_count_;
}

void Model::FacesProcessing(const std::string& line) {
  std::istringstream iss(line);
  std::string token;
  // Первый токен отбрасывается, т.к. будет равен "f"
  iss >> token;

  // Предобработка
  iss >> token;
  PushIndex(token);
  int first_index = faces_.back();

    // Основная обработка
  while (iss >> token) {
    PushIndex(token);
    faces_.push_back(faces_.back());
  }

    // Постобработка
  faces_.push_back(first_index);
}

void Model::PushIndex(const std::string& line) {
  int index = ParseStrTo<int>(line);
  index = index > 0 ? index : index + vertices_count_ + 1;
  faces_.push_back(index);
}

void Model::FillingCoords() {
  for (size_t i = 0; i < faces_count_ * 2; ++i) {
    // -1 из-за особенности формата, индексы нумируются с [1]
    int index = faces_[i] - 1;
    coordinates_[i * 3]     = vertices_[index * 3];
    coordinates_[i * 3 + 1] = vertices_[index * 3 + 1];
    coordinates_[i * 3 + 2] = vertices_[index * 3 + 2];
  }
}

void Model::FindBorders() {
  // Инициализация одной первой точкой
  borders_.x_max = borders_.x_min = vertices_[0];
  borders_.y_max = borders_.y_min = vertices_[1];
  borders_.z_max = borders_.z_min = vertices_[2];

  for (size_t i = 1; i < vertices_count_; ++i) {
    double x = vertices_[i * 3];
    double y = vertices_[i * 3 + 1];
    double z = vertices_[i * 3 + 2];

    borders_.x_max = std::max(borders_.x_max, x);
    borders_.x_min = std::min(borders_.x_min, x);
    borders_.y_max = std::max(borders_.y_max, y);
    borders_.y_min = std::min(borders_.y_min, y);
    borders_.z_max = std::max(borders_.z_max, z);
    borders_.z_min = std::min(borders_.z_min, z);
  }
}

double Model::MaxDifference() {
    return std::max({
        borders_.x_max - borders_.x_min,
        borders_.y_max - borders_.y_min,
        borders_.z_max - borders_.z_min
    });
}

void Model::Normalization() {
  FindBorders();
  Centralization();
  Scale(0.5);
  FindBorders(); // Второй поиск не оптимален. Исправить позже
}

void Model::Centralization() {
  double x_offset = (borders_.x_max + borders_.x_min) / (-2);
  double y_offset = (borders_.y_max + borders_.y_min) / (-2);
  double z_offset = (borders_.z_max + borders_.z_min) / (-2);

  Move(x_offset, X);
  Move(y_offset, Y);
  Move(z_offset, Z);
}

void Model::UpdateBorders(double dx, double dy, double dz) {
    borders_.x_max += dx;
    borders_.x_min += dx;
    borders_.y_max += dy;
    borders_.y_min += dy;
    borders_.z_max += dz;
    borders_.z_min += dz;
}

void Model::Scale(double value) {
  double max_diff = MaxDifference();
  double scale = value / max_diff * 2;

  for (size_t i = 0; i < vertices_.size(); ++i) {
    vertices_[i] *= scale;
  }
}

void Model::Move(double value, Axis axis) {
  int limit = static_cast<int>(vertices_.size() / 3);
  for (int i = 0; i < limit; ++i) {
    vertices_.at(i * 3 + axis) += value;
  }
}

void Model::DetermineModifier(Axis axis, size_t& first_modifier, size_t& second_modifier) {
  if (axis == X) {
    first_modifier = 1;
    second_modifier = 2;
  } else if (axis == Y) {
    first_modifier = 0;
    second_modifier = 2;
  } else {
    first_modifier = 0;
    second_modifier = 1;
  }
}

void Model::Rotate(double value, Axis axis) {
  size_t first_modifier, second_modifier;
  DetermineModifier(axis, first_modifier, second_modifier);
  for (size_t i = 0; i < vertices_count_; ++i) {
    double first_axis = vertices_.at(i * 3 + first_modifier);
    double second_axis = vertices_.at(i * 3 + second_modifier);
    vertices_.at(i * 3 + first_modifier) =
        cos(value) * first_axis - sin(value) * second_axis;
    vertices_.at(i * 3 + second_modifier) = sin(value) * first_axis + cos(value) * second_axis;
  }
}

}  // namespace s21

#endif  // VIEWER_V_2_0_SRC_MODEL_MODEL_CC
