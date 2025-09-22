#include <iostream>
using namespace std;

// int contadorDeQuebrados() {

// }

int main() {
    const int bandejas = 5;
    int latas, copos;

    int totalCoposQuebrados = 0;

    cout << "Quantidade Latas: " << endl;
    cin >> latas;

    cout << "Quantidade Copos: " << endl;
    cin >> copos;

    cout << "bandejas: " << bandejas << endl;
    cout << "Latas: " << latas << endl;
    cout << "Copos: " << copos << endl;

    if (latas > copos) {
        // certamente deixara cair
        totalCoposQuebrados += copos;
    }

    cout << "totalCoposQuebrados: " << totalCoposQuebrados << endl;


    return 0;
}