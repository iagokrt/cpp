#include <iostream>
#include <cmath>
using namespace std;

/**
Faça um programa em C++ que calcula o desvio padrão de 10 números. Para isso:

    Aloque o vetor de teste estaticamente:
        float valores[10] = {1, -8, 9, 255, ... }
    
    ** Faça uma função que retorna o cálculo da média aritmética ( μ  na fórmula ).
    ** Faça uma função que retorna o desvio padrão passando como argumentos o vetor, tamanho  e média.
    
    Use a raiz quadrada: sqrt()
    Exiba no final a média e o desvio padrão.
    Não é permitido o uso do STL (vector, por exemplo).
    
    Desvio padrão: raiz sobre N do somatório do quadrado de cada valor (xi) descontado a média ( μ ).
*/

float media_(float valores[10], int tamanho) {
    float media = 0; 
    float soma = 0; 
    int i;

    for (i = 0; i < tamanho; i++) {
        soma += valores[i];
    }
    media = soma / tamanho;

    return media;
}

float desvio_(float valores[10], int tamanho, float media) {
    float desvio = 0;
    int j;

    for (j = 0; j < tamanho; j++) {
        desvio += (valores[j] - media) * (valores[j] - media);
    }
    desvio = sqrt(desvio / tamanho);

    return desvio;
}

int main() {
    float valores[10] = {1, -8, 9, 255, 2, 4, 6, 8, 10, 12};

    int j;
    float media;
    float desvio;

    media = media_(valores, 10);

    desvio = desvio_(valores, 10, media);

    cout << "media:" << media << endl;
    cout << "desvio:" << desvio << endl;

    return 0;
}