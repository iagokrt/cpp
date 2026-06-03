#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

using namespace std;
 
/**
    Crie uma função que receba as velocidades linear (𝑣), em m/s, e angular (𝜔), em rad/s,
    de um robô móvel do tipo diferencial e retorne as velocidades de atuação nas duas rodas.
    As equações para o cálculo da cinemática inversa são dadas por:
    
    𝑣1 = 𝑣 + 𝑙𝜔
    𝑣2 = 𝑣 − 𝑣1
    
    Onde: 𝑣1 é a velocidade da roda esquerda; 𝑣2 é a velocidade da roda direita e; 𝑙 é a
    largura do eixo do robô.
    
    As velocidades das rodas devem ser repassadas por referência
    através de dois parâmetros da função.
    
    A largura 𝑙 deve ser definida no início do programa,
    através da entrada padrão acompanhada da mensagem “Insira a largura do eixo: ”.
    
    Após
    isso,
    
    o usuário deve passar a máxima velocidade linear e angular do robô, com as
    seguintes mensagens: “Insira a velocidade linear: ” e;
    
    “Insira a velocidade angular: ”.
    
    A função deve retornar um de dois possíveis valores enumerados: 'RESULTADO_OK = 0',
    se calculo ocorreu como esperado, ou 'RESULTADO_FALHO = 1', caso a velocidade
    linear/angular passadas estejam fora do limite de velocidade do robô. 
    
    O programa deve apresentar as velocidades das rodas na tela, com as seguintes mensagens: 
    “Velocidade da roda esquerda = ” e “Velocidade da roda direita = ”.
    
    Após apresentar as velocidades das rodas, o programa deve esperar 1 segundo (use a biblioteca “chrono” e “thread” do
    C++) e pedir novamente as velocidades linear e angular.
    O programa irá encerrar apenas quando forçado na IDE.

    Exemplo de uso da biblioteca “chrono” e “thread” para gerar um atraso de 1s:
    #include <chrono>
    #include <thread>
    ...
    while ( true )
    {
    ...
    this_thread::sleep_for(1000ms); //espera 1 segundo
    }
 
*/
 

enum Res { RESULTADO_OK = 0, RESULTADO_FALHO = 1 };

Res velocity(int &v, int &w, int l, int &v1, int &v2) {
    const double MAX = 100.0;
    
    if (abs(v) > MAX || abs(w) > MAX) {
        return RESULTADO_FALHO;
    }

    v1 = v + l*w;
    v2 = v - v1;
    
    // cout << "Velocidade da roda esquerda = " << v1 << endl;
    // cout << "Velocidade da roda direita = " << v2 << endl;
    
    return RESULTADO_OK;

}
 
int main() {
  int v = 0;
  int w = 0;
  int l = 0;
  
  int v1 = 0;
  int v2 = 0;
  
  float result = 0;
 
  cout << "Insira a largura do eixo: ";
  cin >> l;
 
  while(true) {
    cout << "Insira a velocidade linear: ";
    cin >> v;
    
    cout << "Insira a velocidade angular: ";
    cin >> w;

    Res result = velocity(v, w, l, v1, v2);

    if (result == RESULTADO_OK) {
        cout << "Velocidade da roda esquerda = " << v1 << endl;
        cout << "Velocidade da roda direita = " << v2 << endl;
    } else {
        cout << "Velocidade linear/angular fora do limite do robo." << endl;
    }

    this_thread::sleep_for(1000ms);

  }
  
  return 0;
}