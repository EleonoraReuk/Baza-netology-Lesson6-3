#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "Parallelogram.h"


class Rhombus : public Parallelogram{
public:
	Rhombus(double side, double angle_A, double angle_B);

	string get_name() const override;
};

#endif
