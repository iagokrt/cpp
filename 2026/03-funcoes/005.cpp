#include <iostream>
using namespace std;

/**
5) Implemente uma função chamada "OrdenaTres" que recebe na entrada padrão (i.e., cin)
três números x, y, e z em ponto flutuante de precisão simples. A função deve ordenar em
ordem crescente os três valores, colocando o menor valor em x, e o maior em z. No final,
o programa deve imprimir os valores x, y e z, em sequência. A interação com usuário
deve ser feita no console, conforme exemplo abaixo:

Insira o valor em x: 3

Insira o valor em y: 37.76

Insira o valor em z: 1.0

A sequencia ordenada eh x = 1.0, y = 3.0 e z = 37.76

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
