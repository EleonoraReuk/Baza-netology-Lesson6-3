#ifndef FIGURE_H
#define FIGURE_H

#include <string>

using namespace std;

class Figure {
public:
	virtual string get_name() const = 0;
	virtual ~Figure() = default;
};

#endif