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

*/

// com ponteiro
void Troca_p(int *a, int *b) {
  int tempo = *a;
  *a = *b;
  *b = tempo;
}

void Troca(int &a, int &b) {
  int temporaria = a;
  a = b;
  b = temporaria;
}

int main() {
  int a, b;

  cout << "Insira o valor A: ";
  cin >> a;
  cout << "Insira o valor B: ";
  cin >> b;

  cout << "A: " << a << endl;

  cout << "B: " << b << endl;

  cout << "TROCA" << endl;

  // Troca_p(&a, &b); // com ponteiro
  Troca(a, b); // com referencia

  cout << "A: " << a << endl;

  cout << "B: " << b << endl;

  return 0;
}

// obs
/**
Ponteiro	| Referência
explícito	| implícito
você vê o endereço |	você não vê

 */