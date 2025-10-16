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
    // float result;

    vector<string> rowDraw;

    // list<string> row;
    list<string> rows = {"*", "*"};
    // list<string> rows = {"*", "*"};

    list<string> column;

    int size;

    alt = 3;
    larg = 4;

    for (j = 0; j < alt; j++) {
        column.push_back("*");
    }
    // cout << "j:" << j << endl;

    for (i = 0; i < larg; i++) {
        cout << endl;
        for (string chars: column) {
            cout << chars;
        }
    }
    // for(string row: rows) {
    //     cout << row;
    // }

    // para cada 'item' largura, adicionar um * no array rowDraw
    // for (int j = 0; j < larg; j++) {
    //     rowDraw.push_back("*");
    //     cout << j  << ": " << "*" << endl;
    // }

    // para cada 'item' altura, adicionar 

    // for (int i = 0; i < alt; i++) {
    //     cout << rowDraw[i];
    // }

    // cout << "Digite o n1: " << endl;
    // cin >> n1;

    return 0;
}
