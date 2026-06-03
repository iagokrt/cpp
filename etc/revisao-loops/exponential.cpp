#include <iostream>
using namespace std;

int expo(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * expo(base, exp - 1);
}

int main() {
    int base, exp, result;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite o expoente: ";
    cin >> exp;

    result = expo(base, exp);

    cout << base << "^" << exp << " = " << result << endl;

    return 0;
}
