#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 3 - Implemente uma função para inverter uma string. O programa deve aceitar uma string como entrada, inverter e exibir o resultado.

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

string reverse(string a) {
  string reversida = "";
  
  for (int i = a.size() - 1; i >= 0; i--) {
    reversida += a[i];
  }
  
  return reversida;
}

// <cstring>
void reverse_cs(char s[]) {
  int tamanho = strlen(s);

  for (int i = tamanho - 1; i >= 0; i--) {
    cout << s[i];
  }

  cout << endl;
}

// memoria
void reverse_memo(char s[]) {
  int size = 0;

  while(s[size] != '\0') {
    size++;
  }
  // descobriu o tamanho

  for (int i = size -1; i >= 0; i--) {
    cout << s[i]; // imprime de traz pra frente
  }

}

int main() {
  string input = "";
  
  cout << "String: ";
  cin >> input;

  cout << reverse(input) << endl;

  // <cstring>
  char input_cs[100];

  cout << "String: ";
  cin >> input_cs;

  reverse_cs(input_cs);

  reverse_memo(input_cs);

  return 0;
}
