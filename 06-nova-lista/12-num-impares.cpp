#include <iostream>
using namespace std;

/**
Faça uma função em C++ que imprime números ímpares de 0 a um limite superior. 
O limite superior deve ser incluído se for ímpar.
 */

void impares(int num) {

    if (num % 2 == 1) {
        cout << num << endl;
    }

}

int main() {
    int limiteSuperior = 11;

    int i;

    for (i =0; i <= limiteSuperior; i++) {
        impares(i);
    }

    return 0;
}