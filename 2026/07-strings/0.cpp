#include <iostream>
using namespace std;
 
/* Lista 7 - Strings */
 
// Faça com as 3 implementações diferentes:
// Implementacao 1 - classe std::string
// Implementacao 2 - biblioteca <cstring>
// Implementacao 3 - strings na memoria
 
// 1 - Escreva um programa que recebe duas strings do usuário e concatena-as em uma terceira string. Em seguida, exiba o resultado.
 
// 2 - Crie um programa que receba do terminal uma string e conte o número de caracteres (sem contar espaços em branco e o caractere nulo) e imprimima o resultado.
 
// 3 - Implemente uma função para inverter uma string. O programa deve aceitar uma string como entrada, inverter e exibir o resultado.
 
// 4 - Escreva um programa que compara duas strings e determina se são iguais ou diferentes.
 
// 5 - Crie um programa que substitui todas as ocorrências de um caractere específico em uma string por outro caractere fornecido pelo usuário.
 
// 6 - Desenvolva um programa que conta o número de palavras em uma string. Considere que as palavras são separadas por espaços em branco
 
// 7 - Implemente uma função que verifica se uma string é um palíndromo (lê-se da mesma forma de trás para frente).
 
// 8 - Crie um programa que recebe uma string e remove todos os espaços em branco dela
 
// 9 - Escreva um programa que recebe uma string e exibe cada palavra em uma nova linha.
 
// 10 - Implemente um programa que converte todas as letras maiúsculas de uma string em minúsculas e vice-versa.
 
// 11 - Crie um programa que conta o número de vogais e consoantes em uma string.
 
// 12 - Desenvolva um programa que verifica se uma dada string é um endereço de e-mail válido. Considere pelo menos a presença de "@" e ".".
 
string concat(string a, string b) {
  return a + b;
}
 
string reverse(string a) {
  string reverse = "";
  
  for (int i = a.size() - 1; i >= 0; i--) {
    reverse += a[i];
  }
  
  return reverse;
}
 
bool compare(string &a, string &b) {
  //if (a == b) return true;
  return (a == b);
}
 
string replace(string &a, char cc, char r) {
 
  int a_size = a.size();
  
    for (int i = 0; i < a_size; i++) {
      if (a[i] == cc) {
        a[i] = r;  // substitui
      }
    }
  
  return a;
}

int main(int argc, char** argv) {
  string a, b, c;
  
  char cc, r;
  
  /* // QUESTAO 1
  cout << "string a: ";
  cin >> a;
  cout << "string b: ";
  cin >> b;
  cout << "Concat: " << concat(a, b) << endl; */
  
  /* // QUESTAO 2
  string words;
  int count = 0;
  if (argc < 2) {
    return 1;
  }
  for (int i = 0; i < argc; i++) {
    cout << "i: " << i << endl;
    if (i == 0) continue;
    string word = argv[i];
    int word_CharCount = word.size();
    count += word_CharCount;
  }
  cout << "char count: " << count << endl; */
  
  /* // QUESTAO 3
  cout << "string a: ";
  cin >> a;
  cout << "reverse a: " << reverse(a) << endl; */
  
  /* // QUESTAO 4
  cout << "string a: ";
  cin >> a;
  cout << "string b: ";
  cin >> b;
  cout << "Iguais?: " << compare(a, b) << endl; */
  
  /* // QUESTAO 5
  cout << "string a: ";
  cin >> a;
  cout << "troque cc: ";
  cin >> cc;
  cout << "por r: ";
  cin >> r;
  
  cout << "replaced: " << replace(a, cc, r) << endl; */
 
 
  return 0;
}