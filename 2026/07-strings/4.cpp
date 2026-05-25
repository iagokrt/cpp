#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 4 - Escreva um programa que compara duas strings e determina se são iguais ou diferentes.
// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

bool compare_strings(string a, string b) { 
  return a == b; 
}

bool compare_strings_cstring(char a[], char b[]) {
  return strcmp(a, b) == 0;
}

bool compare_strings_memo(char a[], char b[]) {
  int i = 0;

  while (a[i] != '\0' && b[i] != '\0') {
    if (a[i] != b[i]) {
      return false;
    }
    i++;
  }

  return a[i] == b[i]; // true se as string forem iguais
}

int main() {
  string a, b;
  cout << "String a: ";
  cin >> a;
  cout << "String b: ";
  cin >> b;

  cout << "iguais? " << compare_strings(a, b) << endl;

  char a_2[100];
  char b_2[100];

  strcpy(a_2, a.c_str());
  strcpy(b_2, b.c_str());

  cout << boolalpha;
  cout << "iguais?<cstring> " << compare_strings_cstring(a_2, b_2) << endl;

  cout << "iguais?(memoria) " << compare_strings_memo(a_2, b_2) << endl;


  return 0;
}
