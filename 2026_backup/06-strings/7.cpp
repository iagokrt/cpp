#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 7 - Implemente uma função que verifica se uma string é um palíndromo (lê-se da mesma forma de trás para frente).

// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria

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

/** NAO FUNCIONARIA ASSIM
char* reverse(char s[]) {
  char result[100];
  ...
  return result;
} porque result foi criado dentro da funcao
 */
void reverse_v2(char s_in[], char s_out[]) {
  int size = 0;

  while(s_in[size] != '\0') {
    size++;
  }
  // descobriu o tamanho

  int j = 0;

  for (int i = size -1; i >= 0; i--) {
    s_out[j] = s_in[i];
    j++;
  }

  s_out[j] = '\0'; // condicao de encerrar a string
}

bool isPalindrome(char s1[], char srev[]) {
  int size = 0;

  while (s1[size] != '\0' && srev[size] != '\0') {
    if (s1[size] != srev[size]) {
      return false;
    }
    size++;
  }
  return s1[size] == '\0' && srev[size] == '\0';
}

bool isPalindrome_v2(char s1[]) {
  int size = 0;
  int left = 0;
  int right = 0;

  while (s1[size] != '\0') { size++; }

  right = size - 1;
  //   a r a r a
  //   ^       ^
  //   0       4

  while (left < right) {
    if (s1[left] != s1[right]) { return false; }

    left++;
    right--;
  }

  return true;
}

bool isPalindromeString(string s) {
  int left = 0;
  int right = s.size() - 1;
  while (left < right) {
    if (s[left] != s[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

bool isPalindromeCString(char s[]) {
  int size = strlen(s);
  for (int i = 0; i < size / 2; i++) {
    if (s[i] != s[size - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  char s_in[100];
  char s_out[100];

  // bool isPalindrome

  cout << "Digite Palavra: ";
  cin >> s_in;

  reverse_v2(s_in, s_out);

  cout << endl;

  cout << "Input: " << s_in << endl;
  cout << "Reverse: " << s_out << endl;

  // versao memoria/manual
  cout << "[MEMORIA] ";
  cout << boolalpha << isPalindrome(s_in, s_out) << endl;
  cout << "[MEMORIA start vs end] ";

  cout << boolalpha << isPalindrome_v2(s_in) << endl;

  // versao cstring
  cout << "[CSTRING] ";
  cout << boolalpha << isPalindromeCString(s_in) << endl;

  // versao std::string
  cout << "[STRING] ";
  cout << boolalpha << isPalindromeString(s_in) << endl;

  return 0;
}

// versoes comparando pelas pontas (2 pointers)
/**
  arara
  ^   ^
*/

