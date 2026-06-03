#include <iostream>
#include <cmath>

using namespace std;

/**
9) Dadas três coordenadas de pontos no plano cartesiano, escreva uma função que receba
como parâmetros estas coordenadas e retorne o perímetro do triangulo, cujos vértices
são essas coordenadas. 

A função que calcula o perímetro deve invocar a função criada
no exercício anterior para cálculo das arestas. Todos os valores devem estar em formato
de ponto flutuante de precisão dupla.


  eg:

  A(0,0)
  B(3,0)
  C(0,4)
  Perimetro: 12
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
  double x3, y3; // C(x, y)

  double ab, bc, ac;
  double perimeter;

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

  cout << "Digite ponto C(x, y): " << endl;
  cout << "x : ";
  cin >> x3;
  cout << "y : ";
  cin >> y3;

  ab = distanciaEuclidiana(x1, y1, x2, y2); // AB Distancia
  bc = distanciaEuclidiana(x2, y2, x3, y3); // BC Distancia
  ac = distanciaEuclidiana(x1, y1, x3, y3); // AC Distancia


  cout << "A(" << x1 << "," << y1 << ")" << endl;
  cout << "B(" << x2 << "," << y2 << ")" << endl;
  cout << "C(" << x3 << "," << y3 << ")" << endl;

  perimeter = (ab + bc + ac);

  cout << "Perimetro: " << perimeter;

  return 0;
}
