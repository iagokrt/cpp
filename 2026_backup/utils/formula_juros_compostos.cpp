#include <iostream>
#include <cmath>
using namespace std;

/**
  Crie um programa que calcule e exiba o valor de uma conta bancária após um certo número  
  de anos de investimento, considerando juros compostos.

  M = C * (1 + i) ^ t

  M = montante Total
  C = capital inicial
  i = taxa de juros
  t = tempo
*/
int main() {
  double m, c, i, t;

  cout << "Insira o valor capital inicial: " << endl;
  cin >> c;

  cout << "Insira a taxa de juros: " << endl;
  cin >> i;

  cout << "Insira a quantidade de anos de investimento: " << endl;
  cin >> t;

  cout << "Inicial: " << c << endl;
  cout << "Taxa de juros: " << i << endl;
  cout << "Periodo (anos): " << t << endl;
  
  cout <<  "Montante: " << c * pow((1 + i), t) << endl;

  // system("pause");
  return 0;
}