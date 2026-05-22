#include "Square.h"

Square::Square(double side)
	: Rectangle(side, side) {}

string Square::get_name() const { return "Квадрат"; }
