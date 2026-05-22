#include "Rhombus.h"

Rhombus::Rhombus(double side, double angle_A, double angle_B)
	: Parallelogram(side, side, angle_A, angle_B) {}

string Rhombus::get_name() const { return "Ромб"; }