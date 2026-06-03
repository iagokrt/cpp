#include <iostream>
#include <locale>
// #include <cmath>
using namespace std;
/**
<pre>
- Leia 4 (quatro) números
- Calcule o quadrado para cada um
- Somem todos
- Mostre o resultado

</pre>
*/

int sqr(int num) {
    return num * num;
}

int main() {
    int total = 0;

    /* 1. Naive */
    // int num1, num2, num3, num4;
    // int sqr1, sqr2, sqr3, sqr4;

    // cout << "Digite (num 1):";
    // cin >> num1;
    // cout << "Digite (num 2):";
    // cin >> num2;

    // sqr1 = sqr(num1);
    // sqr2 = sqr(num2);
    // // sqr3 = sqr(num3);
    // // sqr4 = sqr(num4);

    // wcout << endl;
    // wcout << L"(num1)^2:" << sqr1 << endl;
    // wcout << L"(num2)^2:" << sqr2 << endl;
    // // cout << "(num3)^2:" << sqr3 << endl;
    // // cout << "(num4)^2:" << sqr4 << endl;

    // total = sqr1 + sqr2;
    // // total = sqr1 + sqr2 + sqr3 + sqr4;

    // cout << "total:" << sqr1 + sqr2 << endl;

    /* 2. Array - Loop  */

    int numbers[4] = {5, 5, 5, 5};

    for (int i = 0; i < 4; i++) {
        cout << numbers[i] << endl;
        total += sqr(numbers[i]);
    }
    cout << "Resultado:" << total << endl;

    system("pause");

    return 0;
}