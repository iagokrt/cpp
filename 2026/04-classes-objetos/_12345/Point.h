#pragma once

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y);
    int getX();
    int getY();
    void setCoords(int x_, int y_);
};
