#include "Parallelogram.h"

Parallelogram::Parallelogram(double side_a, double side_b, double angle_A, double angle_B)
	: Quadrilateral(side_a, side_b, side_b, angle_A, angle_B, angle_A, angle_B) {}

string Parallelogram::get_name() const { return "ֿאנאככוכמדנאלל"; }