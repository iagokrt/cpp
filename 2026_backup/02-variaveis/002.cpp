#include <iostream>
using namespace std;

/**
  Calcule a área de um retângulo com base em sua largura e altura. A largura e a altura 
devem ser passadas através da entrada padrão. 
*/
/*int main() {
  int alt, larg;
  
  cout << "Insira o valor Altura: ";
  cin >> alt;
  cout << "Insira o valor Largura: ";
  cin >> larg;

  cout << "Area: " << (alt * larg) << endl;
  
  // system("pause");
  return 0;
} */

int main(int argc, char** argv) {
  if (argc < 3) {
    cout << "uso: prg ALTURA LARGURA. \n";
    return 1;
  }

  int alt = stoi(argv[1]);
  int larg = stoi(argv[2]);

  cout << "Area: " << (alt * larg) << endl;
  
  return 0;
}