#include <iostream>
using namespace std;

/**
  Converta uma temperatura de graus Celsius para Fahrenheit usando a fórmula: 
  
  F = (C*9/5)+32  
*/
/* int main() {
  double c, f;

  cout << "Insira o valor temperatura (em Graus Celsius): ";
  cin >> c;

  f = (c*9/5) + 32;

  cout << "Celsius: " << c << endl;
  cout << "Fahrenheit: " << f << endl;
  
  // system("pause");
  return 0;
} */
int main(int argc, char** argv) {
  if (argc < 2) {
    cout << "Insira o valor temperatura (grau Celsius) ao executar o programa. \n";
    return 1;
  }

  double c, f;

  c = stod(argv[1]); // stod = string to double
  
  f = (c*9/5) + 32;
  
  cout << "Celsius: " << c << endl;
  cout << "Fahrenheit: " << f << endl;
  
  return 0;
}