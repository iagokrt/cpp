#include <iostream>
using namespace std;

int main() {
    // Faça um programa que solicita dois números inteiros ao 
    // usuário retornando a divisão entre eles.
    // Contudo, não é permito o uso dos operadores de divisão. 
    // Utiliza laços realizando subtrações sucessivas.
    int a,b;
    int i;

    cout << "digite dividendo..." << endl;
    cin >> a;

    cout << "digite divisor..." << endl;
    cin >> b;

    int quo = 0;
    int resto = a;

    // while (resto >= b) {
    //     resto -= b;
    //     quo++;
    // }

    for (i = resto, i >= b; i -= b) {
        quo++;
        resto -= b;
    }

    cout << "Quociente: " << quociente << endl;
    cout << "Resto: " << resto << endl;


    return 0;

}