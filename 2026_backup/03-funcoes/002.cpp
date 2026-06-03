#include <iostream>
#include <cmath>
using namespace std;

/**
2) Refaça o problema anterior, porém implemente uma função chamada "CalculaDesvio",
para calcular e retornar o desvio padrão do conjunto.

Desvio padrão: raiz sobre N do somatório do quadrado de cada valor (xi) descontado a média ( μ ).
*/

float CalculaMedia(float a, float b, float c) {
  return ( (a+b+c) / 3);
}

// populacional 
float CalculaDesvio(float a, float b, float c, float u) {
  float desvio = 0;

  desvio += (a - u) * (a - u);
  desvio += (b - u) * (b - u);
  desvio += (c - u) * (c - u);

  desvio = sqrt(desvio / 3);

  return desvio;
}

int main(int argc, char** argv) {
  float a, b, c;
  float mean, desvio_padrao;

  if (argc < 4) {
    cout << "uso: prg A B C. \n";
    return 1;
  }

  a = stof(argv[1]);
  b = stof(argv[2]);
  c = stof(argv[3]);

  mean = CalculaMedia(a,b,c);

  desvio_padrao = CalculaDesvio(a, b, c, mean);


  printf("%.2f\n", mean);

  printf("%.2f\n", desvio_padrao);

  return 0;
}

