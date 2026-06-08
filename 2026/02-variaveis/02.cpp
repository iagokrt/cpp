#include <iostream>
using namespace std;

/**
  Calcule a área de um retângulo com base em sua largura e altura. A largura e a altura 
devem ser passadas através da entrada padrão. 
*/

int main() {
  int l, a;
    
  cout << "Digite Largura:";
  cin >> l;
  cout << "Digite Altura:";
  cin >> a;
  
  cout << "Area: " << l * a << endl;

  return 0;
}