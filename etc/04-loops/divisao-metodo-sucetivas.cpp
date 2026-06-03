#include <iostream>
using namespace std;

/**
Faça um programa que solicita dois números inteiros ao usuário retornando a divisão entre eles.
Contudo, não é permito o uso dos operadores de divisão (/, // ou %). 
// Utiliza laços realizando subtrações sucessivas.
*/
int main() {
    int dividendo, divisor;

    cout << "Digite o dividendo: " << endl;
    cin >> dividendo;

    cout << "Digite o divisor: " << endl;
    cin >> divisor;

    int quociente = 0;
    int resto = dividendo;

    while (resto >= divisor) {
        resto -= divisor;
        quociente++;
    }

    cout << "Quociente: " << quociente << endl;
    cout << "Resto: " << resto << endl;

    // alternativamente...:

    // int quociente = 0;
    // int resto = dividendo;

    // for (int i = resto; i >= divisor; i -= divisor) {
    //     quociente++;
    //     resto -= divisor;
    // }

    // cout << "Quociente: " << quociente << endl;
    // cout << "Resto: " << resto << endl;


    return 0;
}
