#include <iostream>
#include <string>
using namespace std;

/**
  Escreva um programa que converta uma quantidade em reais para dólares ou euros, com 
  base na cotação atual.
*/

double converterMoeda(double qtd, double cotacao) {
  return (qtd / cotacao);
}

int main() {
  double cot, input_brl, result;
  char mode; // usd ou dolar
  string modeLabel = ""; // label
  cout << "Quantidade de reais: " << endl;
  cin >> input_brl;

  cout << "Insira o tipo da moeda: 'U' para USD Dolar - ou - 'E' para Euro: " << endl;
  cin >> mode;

  if (mode == 'U') {
    cout << "Cotacao dolar: " << endl;
    cin >> cot;
    result = converterMoeda(input_brl, cot);
    modeLabel = " (USD)";
  } else  if (mode == 'E') {
    cout << "Cotacao euro: " << endl;
    cin >> cot;
    result = converterMoeda(input_brl, cot);
    modeLabel = " (EUR)";
  } else {
    cout << "Erro. Insira o moeda (U) Dolar ou (E) Euro";
  }

  cout << "Quantidade: R$ " << input_brl << endl;
  cout << "Cotacao da moeda: " << cot << endl;
  cout << "Conversao: " << result << modeLabel << endl;

  // system("pause");
  return 0;
}