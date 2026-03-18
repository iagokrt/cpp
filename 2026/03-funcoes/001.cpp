#include <iostream>
using namespace std;

/**
1) Implemente uma função chamada "CalculaMedia" que recebe três números em ponto
flutuante de precisão simples. A função deve calcular e retornar a média dos valores,
também em ponto flutuante de precisão simples. 
Os três valores devem ser passados como argumentos para o main (argc e argv). 
Se o número de valores for menor ou maior que três, o programa deve retornar o código de erro.
Caso contrário, deve imprimir no console, o valor da média. 
(Nota: a função "stof" pode ser usada para retornar os valores dos argumentos 
– que estão em formato texto/string – em valores do tipo float.)
*/

float CalculaMedia(float a, float b, float c) {
  return ( (a+b+c) / 3);
}

int main(int argc, char** argv) {
  float a, b, c;
  float mean;

  if (argc < 4) {
    cout << "uso: prg A B C. \n";
    return 1;
  }

  a = stof(argv[1]);
  b = stof(argv[2]);
  c = stof(argv[3]);

  mean = CalculaMedia(a,b,c);

  printf("%.2f\n", mean);

  // Formatação de saída (3 jeitos):
  // 1) printf (C-style) -> simples e direto, define tudo na hora (ex: "%.2f\n")
  // 2) cout + iomanip -> padrão C++, usa estado da stream (fixed + setprecision)
  // 3) std::format (C++20) -> moderno, estilo printf porém mais seguro (nem sempre disponível no g++)

  return 0;
}
