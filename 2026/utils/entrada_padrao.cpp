#include <iostream>
// #include <numbers> // uso: constexpr double PI = std::numbers::pi;
#include <cmath> // acos, M_PI
using namespace std;

/**
  Calcule a área de um círculo com base em seu raio. O raio deve ser passado através da 
entrada padrão. 
*/
/*
int main() {
  constexpr double PI = 3.1415; 
  double r, area;

  cout << "Insira o valor de raio do circulo: ";
  cin >> r;

  area = (PI * r * r);

  cout << "Area: " << area << endl;
  
  // system("pause");
  return 0;
} */
int main(int argc, char** argv) {
  // constexpr double PI = 3.1415;
  // constexpr double PI = std::numbers::pi;
  const double PI = acos(-1);

  double r, area;

  if (argc < 2) {
    cout << "Insira o valor raio (argumento) ao executar o programa. \n";
    return 1;
  }

  r = stod(argv[1]); // stod = string to double

  area = (PI * r * r);
  
  cout << "Area: " << area << endl;

  return 0;
}