#include <iostream>
using namespace std;

// Mesmo programa da lista 2 ("basic-calculator.cpp")
// Incluído novamente para referência.

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

/* modes:
    1 = "Adição/Soma"
    2 = "Subtração"
    3 = "Multiplicação"
    4 = "Divisão"
*/
void calculadora(float a, float b, int op = 1) {
    switch(op) {
        case 1:
            cout << "Soma: " << (a + b) << endl;
            break;
        case 2:
            cout << "Subtracao: " << (a - b) << endl;
            break;
        case 3:
            cout << "Multiplicacao: " << (a * b) << endl;
            break;
        case 4:
            cout << "Divisao: " << (a / b) << endl;
            break;
    }
}

// int main() {
//   float a, b;
  
//   cout << "Insira o valor A: ";
//   cin >> a;
//   cout << "Insira o valor B: ";
//   cin >> b;

//   calculadora(a, b, 1); // 1=SOMA
//   calculadora(a, b, 2); // 2=SUBTRAI
//   calculadora(a, b, 3); // 3=MULTIPLICA
//   calculadora(a, b, 4); // 4=DIVIDE

//   return 0;
// }

/**
    Item 2)
    Modifique o programa para que os valores A e B sejam passados na 
    inicialização do executável (por meio de argc e argv). (Nota: a função "stof" pode ser 
    usada para retornar os valores dos argumentos – que estão em formato texto/string – em 
    valores do tipo float.) 
 */

int main (int argc, char** argv) {
    float a, b;
  
    if (argc < 3) {
        cout << "erro. Uso: ./prg A B \n";
        return 1;
    }

    a = stof(argv[1]); 
    b = stof(argv[2]);

    calculadora(a, b, 1); // 1=SOMA
    calculadora(a, b, 2); // 2=SUBTRAI
    calculadora(a, b, 3); // 3=MULTIPLICA
    calculadora(a, b, 4); // 4=DIVIDE

    return 0;
}
