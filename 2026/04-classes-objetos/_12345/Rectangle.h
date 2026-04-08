#pragma once

#include "Point.h"

class Rectangle {
private:
	Point a;
	Point b;

public:
	Rectangle(Point a, Point b);
	int largura();
	int altura();

	int area();
	int perimeter();

	bool contemPonto(Point p);
};

