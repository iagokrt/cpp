#include <iostream>
#include <vector>
#include <list> // teste
using namespace std;

/**
Faça um programa em C++ que receba como entrada dois números, representando altura e largura. 
Imprima um retângulo formado com o caractere asterisco de altura e largura especificadas.

Exemplo:
Digite altura: 3
Digite largura: 10
**********
**********
**********
*/
int main() {
    int alt, larg;
    int i, j;

    list<string> column;

    cout << "Digite Altura:";
    cin >> alt;

    cout << "Digite Largura:";
    cin >> larg;

    for (j = 0; j < larg; j++) {
        column.push_back("*");
    }
    // cout << "j:" << j << endl;

    for (i = 0; i < alt; i++) {
        cout << endl;
        for (string chars: column) {
            cout << chars;
        }
    }

    return 0;
}
