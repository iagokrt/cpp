#include <iostream>
#include <cstring>

using namespace std;
 
/* Lista 7 - Strings */
 
// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria
 
// 1 - Escreva um programa que recebe duas strings do usuário e concatena-as em uma terceira string. Em seguida, exiba o resultado.
 
string concat(string a, string b) {
  return a + b;
}

void concat_cs(char a[], char b[], char c[]) {
  strcpy(c, a);
  strcat(c, b);
}

void concat_memo(char a[], char b[], char c[]) {
  int i = 0;

  while (a[i] != '\0') {
    c[i] = a[i]; // copiar primeira string para c
    i++;
  }
  int j = 0; // salva onde 'parou de contar'

  while (b[j] != '\0') {
    c[i] = b[j];
    i++;
    j++;
  }
  c[i] = '\0'; // ultimo item do array, 'fechar' a string.

}

int main(int argc, char** argv) {
  string a, b, c;
  
  // std::string
  cout << "string a: ";
  cin >> a;

  cout << "string b: ";
  cin >> b;
  
  c = a + b;
  cout << "Concat (std::string): " << c << endl;

  // <cstring>
  char as[50];
  char bs[50];
  char cs[100];
  char cs_2[100];

  cout << "char as: ";
  cin >> as;
  cout << "char bs: ";
  cin >> bs;

  concat_cs(as, bs, cs);
  cout << "Concat (<cstring>): " << cs << endl;
 
  // strings na memoria
  concat_memo(as, bs, cs_2);
  cout << "Concat (char[]): " << cs_2 << endl;


  return 0;
}