#include <iostream>
using namespace std;

/**
  Calcule a área de um círculo com base em seu raio. O raio deve ser passado através da 
entrada padrão. 
*/
int main() {
  constexpr double PI = 3.1415; 
  double r, area;

  cout << "Insira o valor de raio do circulo: ";
  cin >> r;

  area = (PI * r * r);

  cout << "Area: " << area << endl;
  
  // system("pause");
  return 0;
}