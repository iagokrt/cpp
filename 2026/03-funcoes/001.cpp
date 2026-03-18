#include <iostream>
using namespace std;

/**
1) Implemente uma função chamada "CalculaMedia" que recebe três números em ponto
flutuante de precisão simples. A função deve calcular e retornar a média dos valores,
também em ponto flutuante de precisão simples. Os três valores devem ser passados
como argumentos para o main (argc e argv). Se o número de valores for menor ou maior
que três, o programa deve retornar o código de erro. Caso contrário, deve imprimir no
console, o valor da média. (Nota: a função "stof" pode ser usada para retornar os valores
dos argumentos – que estão em formato texto/string – em valores do tipo float.)
*/

float CalculaMedia

int main() {
  int a, b;

  cout << "Insira o valor A: ";
  cin >> a;
  cout << "Insira o valor B: ";
  cin >> b;

  cout << "Soma: " << (a + b) << endl;
  cout << "Subtracao: " << (a - b) << endl;
  cout << "Multiplicacao: " << (a * b) << endl;
  cout << "Divisao: " << (a / b) << endl;

  return 0;
}
