#include <iostream>
using namespace std;

/**
Faça uma função em C++ que imprime números ímpares de 0 a um limite superior. 
O limite superior deve ser incluído se for ímpar.
 */

void impares(int limiteSuperior) {
    int i;
    
    cout << "[";
    
    for (i = 0; i < limiteSuperior; i++) {
        if (i % 2 == 1) {
            cout << i << ", ";
        }
    }

    if (limiteSuperior % 2 == 1) {
        cout << limiteSuperior << "";
    }

    cout << "]";

}

int main() {
    int limiteSuperior = 0;

    cin >> limiteSuperior;

    impares(limiteSuperior);

    return 0;
}