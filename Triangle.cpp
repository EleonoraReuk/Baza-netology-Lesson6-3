#include "Triangle.h"

Triangle::Triangle(double side_a, double side_b, double side_c,
	double angle_A, double angle_B, double angle_C)
	: a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

double Triangle::get_a() const { return a; }
double Triangle::get_b() const { return b; }
double Triangle::get_c() const { return c; }
double Triangle::get_A() const { return A; }
double Triangle::get_B() const { return B; }
double Triangle::get_C() const { return C; }

string Triangle::get_name() const { return "Треугольник"; }