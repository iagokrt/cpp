#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() { return x; }
int Point::getY() { return y; }


void Point::setCoords(int x_, int y_) {
	x = x_;
	y = y_;
}
