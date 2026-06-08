#include <iostream>
// #include <string>

using namespace std;

/**
  Escreva um programa que retorne true à saída padrão se um número inteiro é par, e false 
  caso o número seja ímpar. O número deve ser passado através da entrada padrão. 
*/

int main() {

  int num;

  cout << "Digite um numero, saber se eh par ou impar" << endl;

  cin >> num;

  cout << (num % 2 == 0 ? "Par" : "Impar");
  return 0;
}