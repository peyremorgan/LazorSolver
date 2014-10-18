#pragma once
#include "iostream"

class Point
{
public:
	Point();
	Point(int x, int y);
	~Point();

	int x;
	int y;
	bool active;

	bool operator==(Point const& a)
	{
		return this->x == a.x && this->y == a.y ? true : false;
	}
};

bool operator==(Point const& a, Point const& b)
{
	return a.x == b.x && a.y == b.y;
}

std::ostream& operator<<(std::ostream& flux, Point const& point)
{
	flux << "x=" << point.x << ", y=" << point.y;
	return flux;
}