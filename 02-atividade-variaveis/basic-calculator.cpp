#include <iostream>

using namespace std;

// void display(string label, float value, int op = 1) {
void calculadora(float value, int op = 1) {
    /* modes:
        1 = "Adição/Soma"
        2 = "Subtração"
        3 = "Multiplicação"
        4 = "Divisão"
    */
    if (op) {
        switch(op) {
            case 1:
                // SOMA
                cout << "Soma: " << value << endl;
                break;
            case 2:
                // SUBTRACAO
                cout << "Subtracao: " << value << endl;
                break;
            case 3:
                // MULTIPLICACAO
                cout << "Multiplicacao: " << value << endl;
                break;
            case 4:
                // DIVISAO
                cout << "Divisao: " << value << endl;
                break;
        }
    }
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
  float a, b;
  float sum, sub, multi, divi;
  
  cout << "Insira o valor A: ";
  cin >> a;
  cout << "Insira o valor B: ";
  cin >> b;

  calculadora(soma(a, b), 1);
  calculadora(subtrai(a, b), 2);
  calculadora(multiplica(a, b), 3);
  calculadora(divide(a, b), 4);

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