#pragma once

#include "Point.h"

class Square
{
public:
	Square();
	Square(int i, int j);
	Square(Point top, Point bot, Point left, Point right);
	~Square();

	Point top;
	Point bot;
	Point left;
	Point right;
};