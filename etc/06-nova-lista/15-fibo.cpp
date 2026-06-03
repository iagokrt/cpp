#include <iostream>
using namespace std;

/**

Crie uma função em C++ que preenche uma vetor contendo a sequência de
Fibonacci até um enésimo número informador pelo usuário. A sequência é definida pelas fórmulas abaixo:

    O vetor deve ser alocado estaticamente no main, por exemplo:
        int vetor[50];
    Função: void fibonacci(int *vetor, int tamanho_max)
    Imprima o vetor no main contendo o resultado da sequência.

Fn = F(n−1) + F(n−2)
F1 = 1
F2 = 1

n>=47 undefined behavior
tipo int limitação de bits . 31 bits p/ valor 1 pra sinal
tipo long long 64 bits . 63 bits p/ valor 1 pra sinal - 4x maior
unsigned long long 64 bits sem bit de sinal - 2x maior que long long
 */
//  Imperativo/iterativo (imprimindo os valores diretamente)
void fib(int n) {
    int f = 1;
    int f_1 = 1;
    int f_2 = 1;

    for (int i = 0; i < n; i++) {
        if (i <=1) {
            cout << f << endl;
            continue;
        }

        f = f_1 + f_2;
        f_2 = f_1;
        f_1 = f;
        cout << f << endl;
    }

}

//  com recursividade - (é pior, lento, pior)
int fibRecursivo(int n) {
    // ruim
    if (n <=1) {
        return 1;
    }
    return fibRecursivo(n-1) + fibRecursivo(n-2);
}

// dentro de fib_v mexe no mesmo lugar da memoria que o main esta usando
// com o vetor em endereço real do array
void fib_v(long long *vetor, int tamanho_max) {
    long long f;
    long long f_1 = 1;
    long long f_2 = 0;

    for (int i = 0; i < tamanho_max; i++) {
        if (i == 0) {
            vetor[i] = 0;
            continue;
        }
        if (i == 1) {
            vetor[i] = 1;
            continue;
        }

        f = f_1 + f_2;
        f_2 = f_1;
        f_1 = f;
        vetor[i] = f;
    }

}

int main() {
    int a;
    
    cout << "Digite numero de 1 a 50:";
    cout << endl << "-- Fibonacci Sequencia --" << endl;

    long long vetor[50]; // delcarando o vetor estatico de teste

    cin >> a;

    cout << " " << endl;

    if (a <= 0 || a > 50) {
        cout << "Number Invalido." << endl;
        return 0;
    }

    cout << "Fibonacci:" << endl;

    fib_v(vetor, a);

    for (int i = 0; i < a; i++) {
        cout << vetor[i] << endl;
    }

    cout << " " << endl;

    return 0;
}
