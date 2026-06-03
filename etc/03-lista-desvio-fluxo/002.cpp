#include <iostream>
using namespace std;

int main() {

    int renda;
    int prestacao;

    cout << "digite renda:" << endl;

    cin >> renda;

    cout << "digite prestacao:" << endl;

    cin >> prestacao;

    // 2000 | 400
    // 20% do renda
    if (0.2 * renda > prestacao) {
        cout << "Emprestimo concedido!";
    } else {
        // cout << "O limite de 20% da renda: " << 0.2 * renda << "e maior que o valor da prestacao";
        cout << "Emprestimo negado!";
    }

    return 0;
}