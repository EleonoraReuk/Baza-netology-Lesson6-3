#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
	Rectangle(double side_a, double side_b);

	string get_name() const override;
};

#endif