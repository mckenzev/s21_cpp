#include "controller.h"

namespace s21 {

void Controller::Rotate(double step, Axis axis) { model_.Rotate(step, axis); }

void Controller::Move(double step, Axis axis) { model_.Move(step, axis); }

void Controller::Normalization() { model_.Normalization(); }

void Controller::Scale(double value) { model_.Scale(value); }

bool Controller::Parse() { return model_.Parse(); }

void Controller::FillingCoords() { model_.FillingCoords(); }

}  // namespace s21