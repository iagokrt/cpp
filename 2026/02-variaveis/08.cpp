#include <iostream>

using namespace std;


/**
 Solicite ao usuário sua idade e determine se ele é considerado adulto (idade maior ou igual 
  a 18) ou não. Se for adulto, coloque true na saída padrão, caso contrário coloque false.
*/

bool maioridade(int idade) {
  return (idade >= 18);
}

int main() {

  int idade = 0;

  cout << "Digite idade" << endl;
  cin >> idade;

  cout << boolalpha << maioridade(idade) << endl;

  return 0;
}