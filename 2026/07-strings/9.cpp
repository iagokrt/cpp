#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 9 - Escreva um programa que recebe uma string e exibe cada palavra em uma nova linha.

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

void println(char s_in[]) {
  // int size = 0;
  bool in_word = false;

  // while (s[size] != '\0') size++;

  for (int i = 0; s_in[i] != '\0'; i++) {
    if (s_in[i] != ' ') {
      cout << s_in[i];
      in_word = true;
    }
    if (s_in[i] == ' ') {
      cout << endl;
      in_word = false;
    }
  }

}

// normal
void print_lines(char s[]) {
  
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ' ') {
      cout << endl; // quebra linha
    } else {
      cout << s[i];
    }
  } 
}

int main() {
  
  char s[100];

  cout << "String: ";

  // cin >> s; // >> para ler uma string, ele para no primeiro espaço.
  cin.getline(s, 100);

  cout << "\nResultado:\n";

  // println(s);
  print_lines(s);

  return 0;
}
