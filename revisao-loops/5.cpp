#include <iostream>
using namespace std;
// Some os números que o usuário entrar até que ele digite o número 0.


int numberInput;
int sum;
// int numbers[];

int main() {
    do {
        cout << "digite um numero" << endl;

        cin >> numberInput;

        if (numberInput != 0) {
            sum += numberInput;
        }

    } while(numberInput != 0);

    cout << "Soma: " << sum;

    return 0;

}