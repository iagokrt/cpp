#include <iostream>
#include <string>
using namespace std;

/**
Crie uma única expressão composta referente aos dados de um aluno, que retorne true à 
saída padrão se: 
• Sua média for maior que 6 E seu número de faltas for maior ou igual à 75% (de um 
total de 80 aulas), OU; 
• Se o aluno validou a disciplina. 

Deve ser pedido à entrada padrão, 
- a média do aluno, 
- seu número de faltas, e 
0 (não validou) ou 1 (validou), da seguinte forma: 
Insira a nota: 3.5 
Insira o numero de faltas: 15 
Insira a validacao: 0 
Na saída padrão devem ser apresentadas as seguintes possíveis mensagens: 
Situacao de aprovacao: true 
ou 
Situacao de aprovacao: false
 */


int main() {
  float nota;

  cout << "Insira a nota: " << endl;
  cin >> nota;

  return 0;
}