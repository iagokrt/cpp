#include <iostream>
using namespace std;

/**
2) Refaça o problema anterior, porém implemente uma função chamada "CalculaDesvio",
para calcular e retornar o desvio padrão do conjunto.
*/

int main() {
  int a, b;

  cout << "Insira o valor A: ";
  cin >> a;
  cout << "Insira o valor B: ";
  cin >> b;

  cout << "Soma: " << (a + b) << endl;
  cout << "Subtracao: " << (a - b) << endl;
  cout << "Multiplicacao: " << (a * b) << endl;
  cout << "Divisao: " << (a / b) << endl;

  return 0;
}
