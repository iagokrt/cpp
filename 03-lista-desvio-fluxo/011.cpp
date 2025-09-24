#include <iostream>
using namespace std;

int coposQuebrados(int latas, int copos, int totalCoposQuebrados) {
    if (latas > copos) {
        totalCoposQuebrados += copos;
        return totalCoposQuebrados;
    } else {
        return 0;
    }

}

int main() {
    const int bandejas = 5;
    int latas, copos;

    int main_totalCoposQuebrados = 0;

    for (int i = 1; i <= bandejas; i++) {
        // cout << "bandeja " << i << endl;
        
        cout << "bandeja(" << i << ") Quantidade Latas: " << endl;
        cin >> latas;

        cout << "bandeja(" << i << ") Quantidade Copos: " << endl;
        cin >> copos;

        main_totalCoposQuebrados = coposQuebrados(latas, copos, main_totalCoposQuebrados);
    }

    cout << main_totalCoposQuebrados << " copos quebrados" <<endl;

    return 0;
}