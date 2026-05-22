#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(double side_a, double side_b, double angle_A, double angle_B);

	string get_name() const override;
};

#endif