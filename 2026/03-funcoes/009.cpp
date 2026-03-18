#include <iostream>
using namespace std;

/**
9) Dadas três coordenadas de pontos no plano cartesiano, escreva uma função que receba
como parâmetros estas coordenadas e retorne o perímetro do triangulo, cujos vértices
são essas coordenadas. A função que calcula o perímetro deve invocar a função criada
no exercício anterior para cálculo das arestas. Todos os valores devem estar em formato
de ponto flutuante de precisão dupla.

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
