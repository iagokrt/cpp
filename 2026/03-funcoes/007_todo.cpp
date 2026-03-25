#include <iostream>
using namespace std;

/**
7) Elabore uma função que receba como parâmetros dois valores inteiros de 32 bits: a e b.
A função deve ser capaz de calcular a média aritmética dos valores que pertencerem ao
intervalo fechado entre a e b. 
O valor de retorno deve estar em formato de ponto flutuante de precisão simples.

O cálculo da média deve ser feito de forma crescente e deve ser encerrado 
quando for alcançado o fim do intervalo ou quando o valor zero for alcançado.

Exemplo: Com entradas a=-3, b=5 e sequência = {-3, -2, -1, 0, 1, 2, 3, 4, 5}, a função deve
imprimir o valor -2 ([-3 -2 -1]/3). A interação com usuário deve ser feita no console,
conforme exemplo abaixo:

Insira o valor de a: 2

Insira o valor em y: 7

Media = 4.5

*/

float funcione(int a, int b) {
  
} 

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
