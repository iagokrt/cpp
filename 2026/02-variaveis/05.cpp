#include <iostream>
#include <cmath>
using namespace std;

/**
  Crie um programa que calcule e exiba o valor de uma conta bancária após um certo número  
  de anos de investimento, considerando juros compostos.

  M = C * [(1 + i) ^ t]

  M = montante Total
  C = capital inicial
  i = taxa de juros
  t = tempo
*/
int main() {
  double m, c, i, t;

  cout << "Capital Inicial: " << endl;
  cin >> c;

  cout << "Taxa de juros(%): " << endl;
  cin >> i;
  i = i / 100;

  cout << "Tempo(anos): " << endl;
  cin >> t;

  m = c * pow(1 + i, t);

  cout << "Montante: " << m << endl;

  return 0;
}