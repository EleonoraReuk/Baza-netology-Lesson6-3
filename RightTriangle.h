#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
	RightTriangle(double side_a, double side_b, double side_c, double angle_A, double angle_B);

	string get_name() const override;
};

#endif