#include <iostream>

using namespace std;

// 4 - recebe altura e peso. calcule IMC. e informe a situacao
    // imc < 19 => (magra)
    // imc >= 19 && imc <= 25 => (peso ideal)
    // imc > 25 && imc < 31 => (acima do peso)
    // imc >= 31 => obesa

int main () {
    float altura, peso, imc;

    cout << "digite altura:" << endl;

    cin >> altura;

    cout << "digite peso:" << endl;

    cin >> peso;

    imc = peso / (altura*altura);

    if (imc < 19) {
        cout << "IMC esta abaixo de 19, a pessoa esta magra.";
    } else if (imc >= 19 && imc <= 25) {
        cout << "IMC esta entre 19 e 25. a pessoa esta com peso ideal";
    } else if (imc > 25 && imc < 31) {
        cout << "IMC esta entre 25 e 31. a pessoa esta acima do peso";
    } else if (imc >= 31) {
        cout << "IMC atingiu 31 ou ultrapassou. A pessoa esta obesa";
    }
    return 0;
}