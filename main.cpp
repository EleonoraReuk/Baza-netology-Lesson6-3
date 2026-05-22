#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print(const Figure* figure) {
	cout << figure->get_name() << ":\n";

	if (const Triangle* triangle = dynamic_cast<const Triangle*>(figure)) {
		cout << "Стороны: a=" << triangle->get_a()
			<< " b=" << triangle->get_b()
			<< " c=" << triangle->get_c() << endl;
		cout << "Углы: A=" << triangle->get_A()
			<< " B=" << triangle->get_B()
			<< " C=" << triangle->get_C() << endl;
	}
	else if (const Quadrilateral* quad = dynamic_cast<const Quadrilateral*>(figure)) {
		cout << "Стороны: a=" << quad->get_a()
			<< " b=" << quad->get_b()
			<< " c=" << quad->get_c()
			<< " d=" << quad->get_d() << endl;
		cout << "Углы: A=" << quad->get_A()
			<< " B=" << quad->get_B()
			<< " C=" << quad->get_C()
			<< " D=" << quad->get_D() << endl;
	}
	cout << endl;
}

int main() {
	Triangle triangle(10, 20, 30, 50, 60, 70);
	RightTriangle rightTriangle(10, 20, 30, 50, 60);
	IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	EquilateralTriangle equilateralTriangle(30);

	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhombus rhombus(30, 30, 40);

	print(&triangle);
	print(&rightTriangle);
	print(&isoscelesTriangle);
	print(&equilateralTriangle);
	print(&quadrilateral);
	print(&rectangle);
	print(&square);
	print(&parallelogram);
	print(&rhombus);

	return 0;
}