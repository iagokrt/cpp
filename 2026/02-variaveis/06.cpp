#include <iostream>
#include <string>
using namespace std;

/**
  Escreva um programa que converta uma quantidade em reais para dólares ou euros, com 
  base na cotação atual.
*/

double convert(double real, double cotacao) {
  return real / cotacao;
}

int main() {

  int opt = 0;
  double result = 0;
  double valorEmReais = 0;
  double cotacao = 0;

  cout << "[CAMBIO]" << endl;
  cout << "Escolha a moeda: 1 = dolar, 2 = euro";
  cin >> opt;

  if (opt != 1 && opt != 2) {
    cout << "[CAMBIO]: OPCAO INVALIDA!" << endl;
    return 1;
  }

  cout << "Valor em Reais: " << endl;
  cin >> valorEmReais;

  cout << (opt == 1 ? "Cotacao Dolar: " : "Cotacao Euro: ");
  cin >> cotacao;

  result = convert(valorEmReais, cotacao);

  cout << "[CAMBIO]: [Conversao] " << result << endl;

  return 0;
}