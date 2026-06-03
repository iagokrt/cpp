#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 2 - Crie um programa que receba do terminal uma string e conte o número de caracteres (sem contar espaços em branco e o caractere nulo) e imprimima o resultado.

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

// 1 - std::string
int count_std(string s) {
  return s.size();
}

// 2 - <cstring>
int count_cstring(char s[]) {
  return strlen(s);
}

// 3 - memoria
int count_string_memo(char s[]) {
  int i = 0;

  while(s[i] != '\0') i++;

  return i;
}

int main(int argc, char* argv[]) {

  // QUESTAO 2
  int count = 0;
  if (argc < 2 || argc > 2) {
    return 1;
  }
  string word = argv[1];
  char* word_alt = argv[1];

  cout << "String : " << word << endl;

  cout << "string size 1: " << count_std(word) << endl;
  cout << "string size 2: " << count_cstring(word_alt) << endl;
  cout << "string size 3: " << count_string_memo(word_alt) << endl;

  return 0;
}
