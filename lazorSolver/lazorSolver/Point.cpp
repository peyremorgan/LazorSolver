#include "Point.h"

Point::Point()
{
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

bool operator==(Point const& a, Point const& b)
{
	return a.x == b.x && a.y == b.y;
}

std::ostream& operator<<(std::ostream& flux, Point const& point)
{
	flux << "x=" << point.x << ", y=" << point.y;
	return flux;
}