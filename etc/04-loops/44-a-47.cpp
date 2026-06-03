#include <iostream>
using namespace std;

/**
44) Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, 
deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero 
e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. 
(utilizar a estrutura REPITA).
*/
int main() {
    float n1, n2;

    float result;

    cout << "Digite o n1: " << endl;
    cin >> n1;

    do {
        cout << "Digite o n2: " << endl;
        cin >> n2;
        // value = n2;

        // result =
        if (n2 == 0) {
            cout << "VALOR INVALIDO" << endl;
        }

    } while(n2 == 0);

    // proceed
    result = n1 / n2;
    cout << "result" << result << endl;


    return 0;
}
