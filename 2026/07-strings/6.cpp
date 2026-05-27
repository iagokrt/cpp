#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 6 - Desenvolva um programa que conta o número de palavras em uma string. Considere que as palavras são separadas por espaços em branco
 
// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

int words_count_naive(string s) {
  int count = 1;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ') {
      count++;
    }
  }
  return count;
}

int words_count_lex(string s) {
  int count = 0;
  bool in_word = false;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ' && in_word == false) {
      count++;
      in_word = true;
    }
    if (s[i] == ' ') {
      in_word = false;
    }
  }
  return count;
}

// int words_count_cstring(char s) {
  // strtok(s, " ");
// }

int words_count_memo(char s[]) {
  int count = 0;
  bool in_word = false;

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != ' ' && in_word == false) {
      count++;
      in_word = true;
    }
    if (s[i] == ' ') {
      in_word = false;
    }
  }
  return count;
}

int main() {
  string words;
  char words_char[100];


  cout << "Frase:";
  // cin >> words; // soh leria a primeira palavra
  // getline(cin, words);
  cin.getline(words_char, 100);

  // cout << "Palavras: " << words_count_naive(words) << endl;
  cout << "Palavras: " << words_count_memo(words_char) << endl;

  return 0;
}
