#include <iostream>
using namespace std;
// #include <cstdint>
// uint32_t  // 32 bits
// uint64_t  // 64 bits

/**
3) Crie uma função chamada "CalculaFatorial" que recebe um número inteiro sem sinal de
32 bits como parâmetro e calcule o seu fatorial. A interação com usuário deve ser feita no
console, conforme exemplo abaixo:

Insira o valor: 4

O fatorial de 4 eh 24

*/

unsigned int CalculaFatorial(unsigned int num) {
  // se é unsigned nao precisa verificar por input negativo
  // se res começa em 1 entao nao precisa calcular para 0! = 1 

  unsigned int res = 1, i;

  for (i = 1; i <= num; i++) {
    res = res * i;
  }

  return res;
} 

int main() {
  int input;
  unsigned int numero, result;
  
  cout << "Insira o valor: " << endl;
  cin >> input;

  // validacao da entrada
  if(input < 0) {
    cout << "Impossivel calcular fatorial para valores negativos." << endl;
    return 1;
  }

  numero = input;

  // validacao do limite para unsigned int
  if (numero > 12) {
    cout << "O fatorial de: " << numero << " nao pode ser calculado. Overflow para unsigned int (32 bits)" << endl;
    return 1;
  }

  result = CalculaFatorial(numero);

  cout << "O fatorial de " << numero << " eh " << result;

  return 0;
}
