#include <iostream>
using namespace std;

/**
48) Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a 
média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada 
nota. 
49) Acrescente uma mensagem 'NOVO CÁLCULO (S/N)?' ao final do exercício [48]. Se foe for 
respondido 'S' deve retornar e executar um novo cálculo, caso contrário deverá encerrar o algoritmo.
*/
int main() {
    float n1, n2;

    float result;

    string novoCalculo = "S";

    do {
        bool valid = true;

        cout << "Digite o nota 1: " << endl;
        cin >> n1;

        if(n1 < 0 || n1 > 10) {
            cout << "NOTA n1 INVALIDA" << endl;
            valid = false;
        }

        cout << "Digite o nota 2: " << endl;
        cin >> n2;

        if (n2 < 0 || n2 > 10) {
            cout << "NOTA n2 INVALIDA" << endl;
            valid = false;
        }

        if(valid == true) {
            cout << "media: " << (n1+n2)/2 << endl;

            cout << "NOVO CALCULO (S/N)?" << endl;
            cin >> novoCalculo;
        } else {
            cout << "Ultimo Calculo foi invalido. Deseja fazer um novo calculo? NOVO CALCULO (S/N)?" << endl;
            // novoCalculo = "S"; // novo cálculo pois o ultimo estava em estado invalido
            cin >> novoCalculo;
        }

    } while(novoCalculo == "S");

    return 0;
}
