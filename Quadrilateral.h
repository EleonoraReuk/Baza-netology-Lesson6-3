#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Figure.h"

class Quadrilateral : public Figure {
protected:
	double a, b, c, d;
	double A, B, C, D;

public:
	Quadrilateral(double side_a, double side_b, double side_c, double side_d,
		double angle_A, double angle_B, double angle_C, double angle_D);

	double get_a() const;
	double get_b() const;
	double get_c() const;
	double get_d() const;
	double get_A() const;
	double get_B() const;
	double get_C() const;
	double get_D() const;

	string get_name() const override;
};

#endif