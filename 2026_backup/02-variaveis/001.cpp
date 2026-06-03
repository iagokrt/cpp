#include <iostream>
using namespace std;

/**
  Peça ao usuário para inserir dois números inteiros e exiba o resultado da adição, 
subtração, multiplicação e divisão desses números.
*/
/*
 int main() {
   int a, b;
  
   cout << "Insira o valor A: ";
   cin >> a;
   cout << "Insira o valor B: ";
   cin >> b;

   cout << "Soma: " << (a + b) << endl;
   cout << "Subtracao: " << (a - b) << endl;
   cout << "Multiplicacao: " << (a * b) << endl;
   cout << "Divisao: " << (a / b) << endl;
  
   return 0;
 } */


/*
  Receber argumentos passados na linha de comando quando o programa é executado.
  obs.: Arrays passados como parâmetro de função viram ponteiro automaticamente.
 */
// int main(int argc, char* argv[]) {
int main(int argc, char** argv) {
  // argv[0] = nome do programa
  // argv[1] = primeiro argumento
  // argv[2] = segundo argumento

  /* validacao de qtd parametros CLI */
  if (argc < 3) {
    cout << "Insira os valores A e B como argumentos ao executar o programa. \n";
    return 1;
  }

  int a = stoi(argv[1]); // stoi = string to integer
  int b = stoi(argv[2]);

  cout << "Soma: " << (a + b) << endl;
  cout << "Subtracao: " << (a - b) << endl;
  cout << "Multiplicacao: " << (a * b) << endl;
  cout << "Divisao: " << (a / b) << endl;
  
  return 0;
}