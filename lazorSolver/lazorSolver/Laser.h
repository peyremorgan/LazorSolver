#pragma once

#include "Point.h"
#include <vector>

using std::vector;

class Laser
{
public:
	Laser();
	~Laser();

	Point origin;
	vector<Point> points;
};

