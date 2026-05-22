#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
	Parallelogram(double side_a, double side_b, double angle_A, double angle_B);

	string get_name() const override;
};

#endif