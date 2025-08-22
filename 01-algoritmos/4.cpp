#include <iostream>
using namespace std;
/**
4. Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. Considere que o percentual de desconto é um número real entre 0 e 1.
<pre>
-inicializa valorInicial, percentual Desconto(de 0 a 1), valorFinal
-recebe inputs (numerico) do valorInicial e do percentual de Desconto (float) 
-calcular reajuste em valores monetário - valorInicial - salario*reajuste = novoSalario 
-armazena o resultado na variavel salario novo
-exibir em tela variavel do novo salario.6
</pre>
*/

int discount(int value, float discount) {
    float newValue;

    return newValue = value - value * discount;
}

int main() {
    int value = 1000;
    float discountVar = 0.2; 

    cout << discount(value, discountVar) << endl;

    system("pause");

    return 0;
}