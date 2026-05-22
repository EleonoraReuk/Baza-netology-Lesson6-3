#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
	Square(double side);

	string get_name() const override;
};

#endif