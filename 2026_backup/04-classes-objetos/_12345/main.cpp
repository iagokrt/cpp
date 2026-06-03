#include <iostream>

#include "Point.h"
#include "Rectangle.h"
using namespace std;

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

    // Point z(22, 0); // test = 0
    // Point z(2, 2); // test = 1
    Point z(0, 2); // test = 1

	bool estaDentro;

	estaDentro = square.contemPonto(z);

	cout << "o ponto: z(" << z.getX() << ", " << z.getY() << ")" << " está dentro do retangulo? " << estaDentro;

    return 0;
}
