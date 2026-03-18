#include <iostream>
using namespace std;

/**
3) Crie uma função chamada "CalculaFatorial" que recebe um número inteiro sem sinal de
32 bits como parâmetro e calcule o seu fatorial. A interação com usuário deve ser feita no
console, conforme exemplo abaixo:

Insira o valor: 4

O fatorial de 4 eh 24

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
