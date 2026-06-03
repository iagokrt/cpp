#include <iostream>
using namespace std;
/**
 Solicite ao usuário sua idade e determine se ele é considerado adulto (idade maior ou igual 
  a 18) ou não. Se for adulto, coloque true na saída padrão, caso contrário coloque false.
*/
string maioridade(int idade) {
  return (idade >= 18) ? "true" : "false";
}
int main() {
  int idade;
  
  cout << "Insira a sua idade: " << endl;
  cin >> idade;

  cout << maioridade(idade);
  
  // system("pause");
  return 0;
}