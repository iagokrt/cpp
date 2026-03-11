#include <iostream>
using namespace std;

/**
  Calcule a área de um retângulo com base em sua largura e altura. A largura e a altura 
devem ser passadas através da entrada padrão. 
*/
int main() {
  int alt, larg;
  
  cout << "Insira o valor Altura: ";
  cin >> alt;
  cout << "Insira o valor Largura: ";
  cin >> larg;

  cout << "Area: " << (alt * larg) << endl;
  
  // system("pause");
  return 0;
}