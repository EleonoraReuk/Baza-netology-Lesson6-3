#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
protected:
	double a, b, c;
	double A, B, C;

public:
	Triangle(double side_a, double side_b, double side_c,
		double angle_A, double angle_B, double angle_C);

	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_A() const;
	double get_B() const;
	double get_C() const;

	string get_name() const override;
};

#endif