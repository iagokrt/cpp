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

string execSituacao(float nota, int faltas, int valida) {
  const int QTD_AULAS = 80;

  float freq = (float)(QTD_AULAS - faltas) / QTD_AULAS; // casting

  if ((nota > 6 && freq >= 0.75) || valida) {
    return "true";
  } else {
    return "false";
  }
}

int main() {
  float nota;
  int qtdFaltas;
  int validou;

  cout << "Insira a nota: " << endl;
  cin >> nota;

  cout << "Insira o numero de faltas: " << endl;
  cin >> qtdFaltas;

  cout << "Insira a validacao: " << endl;
  cin >> validou;
  
  cout << "Situacao de aprovacao: " << execSituacao(nota, qtdFaltas, validou) << endl;

  // system("pause");
  return 0;
}