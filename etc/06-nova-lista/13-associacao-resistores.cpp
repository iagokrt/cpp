#include <iostream>
using namespace std;

/**
Fazer uma função para cálculo da resistência equivalente da associação de 2 resistores (série ou paralelo) e
montar um programa exemplo.

A função deve receber os valores dos resistores mais um caractere que será s para série e p para paralelo.

*/

float associacao(float r1, float r2, char tipo) {

    if (tipo == 's') {
        return r1 + r2;
    } else if (tipo == 'p') {
        return (r1*r2) / (r1 + r2);
    } else {
        return -1;
    }

}

int main() {

    int r1 = 10;
    int r2 = 10;
    char tipo = 's';

    cin >> r1;
    cin >> r2;
    cin >> tipo;

    float resultado = 0;

    resultado = associacao(r1, r2, tipo);

    cout << resultado << endl;

    return 0;
}