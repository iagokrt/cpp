#include <iostream>
#include <vector>
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
    // float n1, n2;

    float result;

    vector<float> valores = {1, -8, 9, 255, 2, 4, 6, 8, 10, 12};
    vector<float> desvios;
    vector<float> desvios_pos;
    float media_u;
    float sum;
    float variancia;
    float desvio_padrao;

    // 1- media aritmetica
    for (float v: valores) {
        media_u += v;
    }
    
    media_u = media_u / 10;

    // 2a. desvios (xi-u)
    for (float vv: valores) {
        desvios.push_back( vv - media_u );
    }
    // 2b. transforma desvios em positivos (e da mais peso aos maiores)
    for (float vvv: desvios) {
        desvios_pos.push_back( vvv * vvv );
    }

    // 3. soma de desvios
    for (float vvvv: desvios_pos) {
        sum += vvvv;
    }
    
    // 4. variancia - pop.
    variancia = sum / 10;
    // 5. raiz quadrada, desvio padrao
    desvio_padrao = sqrt(variancia);


    cout << "Media: " << media_u << endl;
    cout << "Desvio-Padrao: " << desvio_padrao << endl;

    return 0;
}
