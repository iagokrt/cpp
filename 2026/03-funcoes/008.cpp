#include <iostream>
using namespace std;

/**
8) Considerando a fórmula para o cálculo da distância entre dois pontos (x1, y1) e (x2, y2),
escreva uma função que receba como parâmetros, as coordenadas de dois pontos e
retorne a distância entre eles. Todos os valores devem estar em formato de ponto
flutuante de precisão dupla.

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
