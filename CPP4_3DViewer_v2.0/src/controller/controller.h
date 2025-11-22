#pragma once

#include <string>
#include <vector>

#include "../model/model.h"

namespace s21 {

class Controller {
 public:
  Controller(std::vector<double>& coordinates,
             std::vector<double>& vertices, const std::string& filename)
      : model_(coordinates, vertices, filename) {}
	bool Parse();
	void Normalization();
	void Scale(double value);
	void Rotate(double step, Axis axis);
	void Move(double step, Axis axis);
	void FillingCoords();

private:
  	Model model_;
};
}  // namespace s21
