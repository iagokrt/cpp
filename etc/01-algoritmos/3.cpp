#include <iostream>
using namespace std;
/**
3. Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual de reajuste é dado por um número real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário deve digitar o número 0.15.

<pre>
-inicializa salario, reajuste percentual(de 0 a 1), salario novo
-recebe inputs (numerico) do salario e do percentual de reajuste (float) 
-(calcular reajuste em valores monetário) => salario + salario*reajuste = novoSalario 
-armazena o resultado na variavel salario novo
-exibir em tela variavel do novo salario
</pre>
*/

int increase(int salary, float increaseRate) {
    float newSalary;

    return newSalary = salary + salary * increaseRate;
}

int main() {
    int salary = 1000;
    float increaseRate = 0.2; 

    cout << increase(salary, increaseRate) << endl;

    system("pause");

    return 0;
}