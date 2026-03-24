#include <iostream>
using namespace std;

/**
  6) Implemente uma função chamada "CalculaMedia2" que recebe quatro números em ponto
  flutuante de precisão simples. 
  A função deve calcular a média dos três primeiros argumentos 
  e guardar o valor no quarto argumento para ser usado fora da função
  (utilizando a sintaxe específica do C++ para parâmetros por referência).

  Os três valores devem ser passados como argumentos para o main (argc e argv). 

  Se o número de valores for menor ou maior que três, o programa deve retornar o código de erro. 
  Caso contrário,
  deve imprimir a partir do main no console, o valor da média.

*/

void CalculaMedia2(float a, float b, float c, float *d) {
  *d = (a + b + c) / 3;
}

int main(int argc, char** argv) {
  float a, b, c, d;

  if (argc <= 3) {
    cout << "uso: prg A B C. \n";
    return 1;
  }

  a = stof(argv[1]);
  b = stof(argv[2]);
  c = stof(argv[3]);

  CalculaMedia2(a, b, c, &d);

  cout << d;

  return 0;
}
