#include <iostream>
using namespace std;

/**
  5) Implemente uma função chamada "OrdenaTres" que recebe na entrada padrão (i.e., cin)
  três números x, y, e z em ponto flutuante de precisão simples. A função deve ordenar em
  ordem crescente os três valores, colocando o menor valor em x, e o maior em z. 
  No final,
  o programa deve imprimir os valores x, y e z, em sequência. 

  A interação com usuário deve ser feita no console, conforme exemplo abaixo:

  Insira o valor em x: 3

  Insira o valor em y: 37.76

  Insira o valor em z: 1.0

  A sequencia ordenada eh x = 1.0, y = 3.0 e z = 37.76

*/

// void Troca (float *x, float *y) {
//   float temp = *x;
//   *x = *y;
//   *y = temp;
// }

void OrdenaTres(float *x, float *y, float *z) {
  float temp;

  if (*x > *y) {
    temp = *x;
    *x = *y;
    *y = temp;
  }
  if (*x > *z) {
    temp = *x;
    *x = *z;
    *z = temp;
  }
  if (*y > *z) {
    temp = *y;
    *y = *z;
    *z = temp;
  }

}

int main() {
  float x, y, z;

  cout << "Insira o valor em x: ";
  cin >> x;
  cout << "Insira o valor em y: ";
  cin >> y;
  cout << "Insira o valor em z: ";
  cin >> z;

  OrdenaTres(&x, &y, &z);

  // cout << "A sequencia ordenada eh x = " << x << ", y = " << y << " e z = " << z << endl;
  printf("A sequencia ordenada eh x = %.1f, y = %.1f e z = %.1f\n", x, y, z);
  
  return 0;
}
