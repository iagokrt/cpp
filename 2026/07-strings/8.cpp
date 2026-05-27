#include <iostream>
using namespace std;

// 8 - Crie um programa que recebe uma string e remove todos os espaços em branco dela

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

void remove_blanks(char s[]) {
  int size = 0;

  while (s[size] != '\0') size++;

  for (int i = 0; i < size; i++) {
    if (s[i] == ' ') {
      // s[i] = ''; não existe char vazio na memoria, impossivel dessa forma..
      // puxar char depois do espaço
      for (int j = i; j < size; j++) {
        s[j] = s[j + 1];
      }
      size--;
      i--;

    }
  }
  // return s;
}


int main() {
  char s[100];

  cout << "Fase: ";
  cin.getline(s, 100);

  remove_blanks(s);
  cout << s << endl;

  return 0;
}
