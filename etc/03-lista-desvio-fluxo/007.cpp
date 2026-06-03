#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float a,b,c; // (ax^2 + bx + c=0)
    float delta, x1, x2;

    cout << "Digite A: ";
    cin >> a;
    // cout << a;

    cout << "Digite B: ";
    cin >> b;
    // cout << b;

    cout << "Digite C: ";
    cin >> c;
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    delta = (b*b) - 4*a*c;
    // cout << delta << endl;

    x1 = (-b + sqrt(delta)) / (2. * a);
    x2 = (-b - sqrt(delta)) / (2. * a);
    // float tt = sqrt(delta);

    /* Altera a exibição do cout para 2 casa decimais */
	cout << fixed;
	cout << setprecision(2);

    if (delta < 0) {
        // Sem raízes reais
        cout << "Sem raízes reais." << endl;
    } else if (delta == 0) {
        // Raízes reais idênticas.
        cout << "Raízes reais idênticas." << endl;
        cout << x1 << endl;
        cout << x2 << endl;
    } else if (delta > 0) {
        // Raízes reais.
        cout << "Raízes reais." << endl;
        cout << x1 << endl;
        cout << x2 << endl;

    }

    return 0;
}
/**
Faça um programa no qual o usuário informe(cin) os coeficientes a,b e c 
de uma equação de segundo grau (ax^2 + bx + c=0) e calcule as raízes reais. 
Informar ao usuário:
Raízes reais.
Raízes reais idênticas.
Sem raízes reais.
Para limitar o número de casas decimais, veja o exemplo aqui.


notes:
    // se delta > 0 => entao = x1 != x2 (2 raizes reais)
    // se delta = 0 => entao = x1 = x2 (1 raiz reais)
    // se delta < 0 => entao = (0 raizes reais)

TESTES


| Caso do Δ | a | b  | c  | Δ   | Raízes x1, x2 |
| --------- | - | -- | -- | --- | ----------------- |
| Δ > 0     | 1 | -5 | 6  | 1   | 2, 3              |
| Δ > 0     | 2 | 3  | -2 | 25  | -2, 0,5           |
| Δ = 0     | 1 | -2 | 1  | 0   | 1, 1              |
| Δ = 0     | 4 | 12 | 9  | 0   | -1,5, -1,5        |
| Δ < 0     | 1 | 1  | 1  | -3  | sem raízes reais  |
| Δ < 0     | 2 | 2  | 5  | -36 | sem raízes reais  |

*/