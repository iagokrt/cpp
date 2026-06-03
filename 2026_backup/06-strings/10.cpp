#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 10 - Implemente um programa que converte todas as letras maiúsculas 
// de uma string em minúsculas e vice-versa.

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

// 1. std::string
string caps_lock_troca(string s) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += ('a' - 'A');
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= ('a' - 'A');
    }
  }
  return s;
}

// 2. cstring
void caps_lock_troca_two(char s[]) {
  int size = strlen(s);
  
  for (int i = 0; i < size; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += ('a' - 'A');
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= ('a' - 'A');
    }
  }
}

// 3. memória "na unha"
void caps_lock_troca_thr(char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += ('a' - 'A');
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= ('a' - 'A');
    }
  }
}


int main() {

  char str[] = "ABC__xyz";

  cout << str << endl;

  // cout << caps_lock_troca("ABC__xyz") << endl;
  caps_lock_troca_two(str);
  // caps_lock_troca_thr(str);

  cout << str << endl;

  return 0;
}
