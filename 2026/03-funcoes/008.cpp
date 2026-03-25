#include <iostream>
#include <cmath>
using namespace std;

/**
  8) Considerando a fórmula para o cálculo da distância entre dois pontos (x1, y1) e (x2, y2),
  escreva uma função que receba como parâmetros, as coordenadas de dois pontos e
  retorne a distância entre eles. 
  Todos os valores devem estar em formato de ponto flutuante de precisão dupla.


  formula:

  :e.g.
  A(1,2)
  B(4,6)

  dx = 4 - 1 = 3
  dy = 6 - 2 = 4

  d = √( (4-1)² + (6-2)² )

  d = √(3² + 4²) = √(9 + 16) = √25 = 5
*/

double distanciaEuclidiana(double x_1, double y_1, double x_2, double y_2) {
  double dx;
  double dy;

  dx = x_2 - x_1;
  dy = y_2 - y_1;

  return sqrt( (dx)*(dx) + (dy)*(dy) );
}

int main() {
  double x1, y1; // A(x, y)
  double x2, y2; // B(x, y)
  double distance;

  cout << "Digite ponto A(x, y): " << endl;
  cout << "x : ";
  cin >> x1;
  cout << "y : ";
  cin >> y1;
  
  cout << "Digite ponto B(x, y): " << endl;
  cout << "x : ";
  cin >> x2;
  cout << "y : ";
  cin >> y2;

  distance = distanciaEuclidiana(x1, y1, x2, y2);

  cout << "A(" << x1 << "," << y1 << ")" << endl;
  cout << "B(" << x2 << "," << y2 << ")" << endl;

  cout << "Distancia: " << distance;

  return 0;
}
