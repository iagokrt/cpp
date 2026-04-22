#include <iostream>
#include <cmath>

using namespace std;

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

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() { return x; }
int Point::getY() { return y; }

void Point::setCoords(int x_, int y_) {
	x = x_;
	y = y_;
}


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

Rectangle::Rectangle(Point a, Point b) : a(a), b(b) {}

int Rectangle::largura() {
	int largura = 0;

	largura = abs(a.getX() - b.getX());

	return largura;
}

int Rectangle::altura() {
	int altura = 0;

	altura = abs(a.getY() - b.getY());

	return altura;
}

int Rectangle::area() {

	return largura() * altura();
}

int Rectangle::perimeter() {

	return (largura() + altura() ) * 2;
}

bool Rectangle::contemPonto(Point p) {
	int xMin = min(a.getX(), b.getX());
	int xMax = max(b.getX(), b.getX());

	int yMin = min(a.getY(), b.getY());
	int yMax = max(a.getY(), b.getY());

	return (p.getX() >= xMin && p.getX() <= xMax) &&
		   (p.getY() >= yMin && p.getY() <= yMax);
}


int main()
{

    Point a(0, 20);
    Point b(20, 0);

    // Pontos

    cout << "a(" << a.getX() << ", " << a.getY() << ")" << endl;

    cout << "b(" << b.getX() << ", " << b.getY() << ")" << endl;

    // Retangulo

    Rectangle square(a, b);

    cout << "Area: " << square.area() << endl;

    cout << "Perimeter: " << square.perimeter() << endl;

    // pontos para teste: estam dentro do retangulo?

    Point z1(22, 0); // test = 0
    Point z2(2, 2); // test = 1
    Point z3(0, 2); // test = 1

	bool estaDentro1;
	// bool estaDentro2;
	// bool estaDentro3;

	estaDentro1 = square.contemPonto(z1);
	// estaDentro2 = square.contemPonto(z2);
	// estaDentro3 = square.contemPonto(z3);

	cout << "o ponto: z1(" << z1.getX() << ", " << z1.getY() << ")" << " esta dentro do retangulo? " << estaDentro1 << endl;
	// cout << "o ponto: z2(" << z2.getX() << ", " << z2.getY() << ")" << " esta dentro do retangulo? " << estaDentro2 << endl;
	// cout << "o ponto: z3(" << z3.getX() << ", " << z3.getY() << ")" << " esta dentro do retangulo? " << estaDentro3 << endl;

    return 0;
}
