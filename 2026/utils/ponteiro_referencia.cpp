#include <iostream>
using namespace std;

/**
4) Crie uma função chamada "Troca" que recebe na entrada padrão (i.e., cin) dois números
inteiros como parâmetros por referência (utilizando a sintaxe específica do C++ para
parâmetros por referência) e troca seus valores. 
Imprima na saída padrão (i.e., cout) os
valores antes e depois da troca. A interação com usuário deve ser feita no console,
conforme exemplo abaixo:

Insira o valor em x: 2

Insira o valor em y: 3

Agora x = 3 e y = 2

// com ponteiro
void Troca_p(int *a, int *b) {
  int tempo = *a;
  *a = *b;
  *b = tempo;
}
uso: Troca_p(&x, &y); // com ponteiro

*/


void Troca(int &x, int &y) {
  int temporaria = x;
  x = y;
  y = temporaria;
}

int main() {
  int x, y;

  cout << "Insira o valor em x: ";
  cin >> x;

  cout << "Insira o valor y: ";
  cin >> y;

  Troca(x, y); // com referencia

  cout << "Agora x = " << x << " e y = " << y << endl;

  return 0;
}
