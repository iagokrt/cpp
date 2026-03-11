#include <iostream>
// #include <string>

using namespace std;

/**
  Escreva um programa que retorne true à saída padrão se um número inteiro é par, e false 
  caso o número seja ímpar. O número deve ser passado através da entrada padrão. 
*/

string oddEven(int num) {
  return (num % 2 == 0) ? "true" : "false";
}
int main() {
  int num;
  // string result = ""; 
  cout << "Insira o valor numero: ";
  cin >> num;

  cout << oddEven(num) << endl;

  // system("pause");
  return 0;
}