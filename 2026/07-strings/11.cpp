#include <iostream>
using namespace std;

// 11 - Crie um programa que conta o número de vogais e consoantes em uma string.

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria


struct Map {
  int vogais;
  int consoantes;
};

Map vogais(char s[]){
  int size = 0;

  Map letras = {0, 0};

  for (int i = 0; s[i] != '\0'; i++) {
    if(
      (s[i] > 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')
    ) {
        if (s[i] == 'a' ||
            s[i] == 'e' ||
            s[i] == 'i' ||
            s[i] == 'o' ||
            s[i] == 'u' ||
            s[i] == 'A' ||
            s[i] == 'E' ||
            s[i] == 'I' ||
            s[i] == 'O' ||
            s[i] == 'U'
      ) {
        letras.vogais++;
      } else {
        letras.consoantes++;
      }
    }

  }
  return letras;
}

int main() {
  // cout << "Hello World!";
  
  char str[] = "AAAaBC__xyz";

  Map letras = vogais(str);
  cout << letras.vogais << endl;
  cout << letras.consoantes << endl;

  return 0;
}
