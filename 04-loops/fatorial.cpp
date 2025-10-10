#include <iostream>
using namespace std;

/**
Calcular e imprimir o fatorial de um número não negativo utilizando laços de repetição.
Peça ao usuário um número inteiro não negativo como entrada. Verifique se o número é válido.
Utilize um laço for para iterar desde 1 até o valor de numero.
Imprima o resultado na tela.
*/
int main() {
    int input, i;

    unsigned long int res = 1;

    input = 5;

    //cout << "Digite um numero não negativo (calculo fatorial): " << endl;
    cin >> input;

    if (input < 0) {
        cout << "O número deve ser não negativo." << endl;
        return 0;
    } else if (input == 0) {
        // cout << 1 << endl;
        // return 0;
    } else {
        for(i = 1; i<= input; i++) {
            // cout << i << endl;
            res = res*i;
        }
    }

    cout << res << endl;

    // system("pause");

    return 0;
}
