#include <iostream>
using namespace std;
 
/**
7) Elabore uma função que receba como parâmetros dois valores inteiros de 32 bits: a e b.
A função deve ser capaz de calcular a média aritmética dos valores que pertencerem ao
intervalo fechado entre a e b.
 
O valor de retorno deve estar em formato de ponto flutuante de precisão simples.
 
O cálculo da média deve ser feito de forma crescente e deve ser encerrado
quando for alcançado o fim do intervalo ou quando o valor zero for alcançado.
 
Exemplo:
Com entradas a=-3, b=5 e sequência = {-3, -2, -1, 0, 1, 2, 3, 4, 5}, a função deve
imprimir o valor -2 ([-3 -2 -1]/3).
 
A interação com usuário deve ser feita no console,
conforme exemplo abaixo:
 
Insira o valor de a: 2
 
Insira o valor em y: 7
 
Media = 4.5
 
*/
 
  /*
  first attempt
  if (a < 0) {
    for (i = a; i < 0; i++) {
        result += i;
    }
    return result / (a*-1);
  } else {
    for (i = a; i <= b; i++) {
        result += i;
    }
    return result / i;
  }
  */
 
float media(int a, int b) {
  float sum = 0;
  int i = 0;
  int count = 0;
  
  for (i = a; i <= b; i++) {
    //cout << "i:" << i << " ";
    if (a < 0) {
        if (i < 0) {
            sum += i;
            count++;
        } else {
            //cout << endl;
            //cout << "Soma:" << sum;
            //cout << "Qtd:" << count;
            //return sum / count;
        }
    } else {
        //cout << endl;
        
        sum += i;
        count++;
        //cout << "Soma:" << sum << endl;
        //cout << "Qtd:" << count << endl;
    }
  }
  return sum / count;
}
 
int main() {
  int a, b;
  float result = 0;
 
  cout << "Insira o valor A: ";
  cin >> a;
  cout << "Insira o valor B: ";
  cin >> b;
  
  result = media(a, b);
  
  cout << endl;
 
  cout << "Media = " << result << endl;
 
  return 0;
}