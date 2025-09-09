#include <iostream>

using namespace std;

int main() {
  float a, b;
  float sum, sub, multi, divi;
  
  cout << "Insira o valor A: ";
  cin >> a;
  cout << "Insira o valor B: ";
  cin >> b;

  sum = a + b;
  sub = a - b;
  multi = a * b;
  divi = a / b;

  cout << "Soma: " << sum << endl;
  cout << "Subtracao: " << sub << endl;
  cout << "Multiplicacao: " << multi << endl;
  cout << "Divisao: " << divi << endl;

  return 0;
}

/**
    Crie um programa em C++ para enviar a mensagem “Insira o valor A ”. 
    Após isso, será esperado que o usuário digite um valor em ponto flutuante, ou seja, um número real que possui casas decimais. 
    Após digitar o valor e pressionar a tecla “ENTER”, uma nova mensagem com o texto “Insira o valor B ” deve aparecer na próxima linha do console, 
    novamente será esperado que o usuário digite um valor em ponto flutuante. 
    O programa deve ser capaz de realizar:
    - a soma, 
    - subtração, 
    - multiplicação e 
    - divisão de A e B, 
    e mostrar os resultados no console. 
    Abaixo um exemplo do que deve aparecer no console:

    Insira o valor A 3.5
    Insira o valor B 2.3

    Soma: 5.8
    Subtracao: 1.2
    Multiplicacao: 8.05
    Divisao: 1.52
*/