/*
Crie uma classe "Rectangle" que tenha dois objetos da classe "Point" como vértices
opostos do retângulo.

Implemente métodos para calcular a área e o perímetro do
retângulo.

Também, crie um método que receba um objeto Point e verifique se ele se
encontra dentro do retângulo.

*/


#include <cmath>

using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(Point a, Point b) : a(a), b(b) {} // constructor

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
