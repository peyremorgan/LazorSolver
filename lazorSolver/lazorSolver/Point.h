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
};

bool operator==(Point const& a, Point const& b);

std::ostream& operator<<(std::ostream& flux, Point const& point);