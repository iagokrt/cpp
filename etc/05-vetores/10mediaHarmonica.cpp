#include <iostream>
#include <vector>
using namespace std;

/**
Faça um programa em C++ que calcula a média harmônica de 10 números. Para isso:

Aloque o vetor de teste estaticamente:
float valores[10] = {1, -8, 9, 255, ... }
Exiba no final do programa o resultado.
Média harmônica é o inverso de n do somatório dos inversos de cada número do vetor (xi)
*/
int main() {
    float n1, n2;

    float result;

    vector<float> valores = {1, -8, 9, 255, 2, 4, 6, 8, 10, 12};
    // vector<float> valores = {2, 4, 6};

    vector<float> valoresInversos;

    for (float v : valores) {
        // cout << v << endl;
        valoresInversos.push_back(1 / v);
    }

    float sum = 0;
    for (float vv : valoresInversos) {
        sum += vv;
        // cout << vv << endl;
    }
    // result = valores.size()/sum;
    result = 10/sum;

    cout << result << endl;

    return 0;
}
