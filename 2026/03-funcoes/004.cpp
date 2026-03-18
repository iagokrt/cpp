#include <iostream>
using namespace std;

/**
4) Crie uma função chamada "Troca" que recebe na entrada padrão (i.e., cin) dois números
inteiros como parâmetros por referência (utilizando a sintaxe específica do C++ para
parâmetros por referência) e troca seus valores. Imprima na saída padrão (i.e., cout) os
valores antes e depois da troca. A interação com usuário deve ser feita no console,
conforme exemplo abaixo:

Insira o valor em x: 2

Insira o valor em y: 3

Agora x = 3 e y = 2

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
