#include <iostream>
#include <cmath>
using namespace std;

/**
Faça um programa em C++ que calcula o desvio padrão de 10 números. Para isso:

Aloque o vetor de teste estaticamente:
float valores[10] = {1, -8, 9, 255, ... }
Calcula a média aritmética ( μ  na fórmula ).
Use a raiz quadrada: sqrt()
Exiba no final a média e o desvio padrão.
Desvio padrão: raiz sobre N do somatório do quadrado de cada valor (xi) descontado a média ( μ ).
*/
int main() {
    float valores[10] = {1, -8, 9, 255, 2, 4, 6, 8, 10, 12};

    int i,j;
    float soma = 0;
    float media = 0;
    float desvio = 0;

    for (i = 0; i < 10; i++) {
        soma += valores[i];
    }
    media = soma / 10;

    for (j = 0; j < 10; j++) {
        desvio += (valores[j] - media) * (valores[j] - media);
    }

    desvio = sqrt(desvio / 10);
    cout << "media:" << media << endl;
    cout << "desvio:" << desvio << endl;

    return 0;
}