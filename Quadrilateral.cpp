#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(double side_a, double side_b, double side_c, double side_d,
	double angle_A, double angle_B, double angle_C, double angle_D)
	: a(side_a), b(side_b), c(side_c), d(side_d),
	A(angle_A), B(angle_B), C(angle_C), D(angle_D) {}

double Quadrilateral::get_a() const { return a; }
double Quadrilateral::get_b() const { return b; }
double Quadrilateral::get_c() const { return c; }
double Quadrilateral::get_d() const { return d; }
double Quadrilateral::get_A() const { return A; }
double Quadrilateral::get_B() const { return B; }
double Quadrilateral::get_C() const { return C; }
double Quadrilateral::get_D() const { return D; }

string Quadrilateral::get_name() const { return "Четырехугольник"; }