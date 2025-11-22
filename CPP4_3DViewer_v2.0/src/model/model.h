#pragma once

#include <cmath>

#include <string>
#include <vector>

#include "../utils.h"

namespace s21 {

class Model {
public:
  Model(std::vector<double>& coordinates, std::vector<double>& vertices, const std::string& filename_)
      : coordinates_(coordinates),
        vertices_(vertices),
        filename_(filename_) {}

	bool Parse();
	void Scale(double value);
	void Move(double step, Axis axis);
	void Rotate(double step, Axis axis);
	void FillingCoords();
	void Normalization();

private:
	struct Borders {
		double x_min = 0.0;
		double x_max = 0.0;
		double y_min = 0.0;
		double y_max = 0.0;
		double z_min = 0.0;
		double z_max = 0.0;
	};

	void CleanVectors();
	void MemoryAllocation();
	bool CountingLines();
	void CountingFaces(const std::string& line);

	template <typename T>
	T ParseStrTo(const std::string& str);

	bool ReadingData();
	void VerticesProcessing(const std::string& line);
	void FacesProcessing(const std::string& line);
	void PushIndex(const std::string& line);
	void FindBorders();
	void UpdateBorders(double x_offset, double y_offset, double z_offset);
	double MaxDifference();
	void Centralization();
	void DetermineModifier(Axis axis, size_t& first_modifier, size_t& second_modifier);


	std::vector<double>& coordinates_;
	std::vector<double>& vertices_;
	const std::string& filename_;

	std::vector<int> faces_;
	Borders borders_{};
	size_t vertices_count_{};
	size_t faces_count_{};
};

}  // namespace s21
