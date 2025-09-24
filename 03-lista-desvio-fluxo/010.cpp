#include <iostream>
using namespace std;

int main() {

    int diameter; // diametro da bola. 
    int alt, lar, prof; // altura largura profundidade da caixa
    string result; // cabe?

    cout << "Digite Diametro Bola: " << endl;
    cin >> diameter;
    
    cout << "Digite altura Caixa: " << endl;
    cin >> alt;

    cout << "Digite largura Caixa: " << endl;
    cin >> lar;

    cout << "Digite profundidade Caixa: " << endl;
    cin >> prof;

    // se o diametro for maior que qualquer das dimensoes. A bola nao caberá na caixa
    if (diameter >= alt && diameter >= lar && diameter >= prof) {
        result = "NAO Cabe na caixa";
    } else {
        result = "Cabe na caixa";
    }

    cout << result;

    return 0;
}