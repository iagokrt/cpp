#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 5 - Crie um programa que substitui todas as ocorrências de um caractere específico em uma string por outro caractere fornecido pelo usuário.
// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

void replace_(string &s, char replace, char fill) {
  int size = s.size();

  for (int i = 0; i < size; i++) {
    if (s[i] == replace) {
      s[i] = fill;
    }
  }

  // return s;
}

void replace_cstring(char s[], char replace, char fill) {
  // int size = s.size();
  int size = strlen(s);

  for (int i = 0; i < size; i++) {
    if (s[i] == replace) {
      s[i] = fill;
    }
  }

  // return s;
}

void replace_memo(char s[], char replace, char fill) {
  int i = 0;

  while (s[i] != '\0') {
    if (s[i] == replace) {
      s[i] = fill;
    }
    i++;
  }

  // return s;
}


int main() {
  // string s; ou
  char s[100];

  
  char c, replace_me;

  cout << "String: ";
  cin >> s;

  cout << "Trocar o char: " << endl;
  cin >> replace_me;
  
  cout << "Pelo char: " << endl; 
  cin >> c;

  // replace_(s, replace_me, c);
  // replace_cstring(s, replace_me, c);
  replace_memo(s, replace_me, c);

  cout << s << endl;

  return 0;
}
