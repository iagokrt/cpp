#include <iostream>
using namespace std;

/**
  Peça ao usuário para inserir dois números inteiros e exiba o resultado da adição, 
subtração, multiplicação e divisão desses números.
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
  
  // system("pause");
  return 0;
}