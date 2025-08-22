#include <iostream>
using namespace std;
/**
1. Construa o pseudocódigo para:

- Dado um número real qualquer, informe qual é o seu dobro.

<pre>
-inicializa numero
-inicializa resultado
-recebe input numerico do numero
-multiplicar numero por 2
-armazena o resultado da multiplicacao de numero por 2
-exibir em tela
</pre>
*/

int to_double(int num) {
    return num * 2;
}

int main() {
    int num = 5; 

    cout << to_double(num) << endl;

    system("pause");

    return 0;
}