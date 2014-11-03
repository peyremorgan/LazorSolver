// Main.cpp : définit le point d'entrée pour l'application console.
//

#include <iostream>
#include <vector>
#include "Point.h"
#include "Square.h"

using std::vector;
using std::cout;
using std::endl;

int main()
{
	const int width{ 5 };
	const int height{ 5 };

	vector<Point> allPoints{};
	vector<Point> toBeActivated{};

	vector<Square> allSquares{};
	vector<Square> possibleSquares{};

	//Génère la liste des points où peuvent passer les lasers
	for (int i = 0; i < 2 * width + 1; ++i)
		for (int j = 0; j < 2 * height + 1; ++j)
			if (i % 2 != j % 2)
				allPoints.push_back(Point{ i, j });

	//Génère la liste des carrés possibles
	for (int i = 0; i < width; ++i)
		for (int j = 0; j < height; ++j)
			allSquares.push_back(Square{ i, j });

	cout << (Point{ 2, 3 } == Point{ 2, 3 }) << endl;
	cout << (Point{ 2, 3 } == Point{ 3, 3 }) << endl;
	cout << Point{ 2, 3 } << endl;

	getchar();

	return 0;
}