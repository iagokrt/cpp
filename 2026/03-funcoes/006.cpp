#include <iostream>
using namespace std;

/**
6) Implemente uma função chamada "CalculaMedia2" que recebe quatro números em ponto
flutuante de precisão simples. A função deve calcular a média dos três primeiros
argumentos e guardar o valor no quarto argumento para ser usado fora da função
(utilizando a sintaxe específica do C++ para parâmetros por referência). Os três valores
devem ser passados como argumentos para o main (argc e argv). Se o número de valores
for menor ou maior que três, o programa deve retornar o código de erro. Caso contrário,
deve imprimir a partir do main no console, o valor da média.

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
