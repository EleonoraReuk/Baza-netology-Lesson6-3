#include "Rectangle.h"

Rectangle::Rectangle(double side_a, double side_b)
	: Parallelogram(side_a, side_b, 90, 90) {}

string Rectangle::get_name() const { return "Прямоугольник"; }