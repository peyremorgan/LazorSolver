#include "Square.h"


Square::Square()
{
}

Square::Square(int i, int j)
{
	this->top = Point(2 * i + 1, 2 * j);
	this->bot = Point(2 * i + 1, 2 * (j + 1));
	this->left = Point(2 * i, 2 * j + 1);
	this->right = Point(2 * (i + 1), 2 * j + 1);
}

Square::Square(Point top, Point bot, Point left, Point right)
{
	this->top = top;
	this->bot = bot;
	this->left = left;
	this->right = right;
}

Square::~Square()
{
}
