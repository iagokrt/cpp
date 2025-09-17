#include <iostream>
using namespace std;

/**
    Faca um programa que o usuario informe um numero e mostre se
    eh par ou impar e se é negativo ou positivo
*/

string isOddEven(int num = 0) {
    if (num % 2 == 0) {
        return " eh par";
    } else if (num % 2 != 0) {
        return " eh impar";
    } else return "";
}

string isPositive(int num) {
    if (num < 0) {
        return " e Negativo";
    } else if ( num > 0) {
        return " e Positivo";
    } else {
        return "0";
    }
}


int main() {
    // cout << world() << endl;;
    int input;
    string str_isOddEven;
    string str_isPositive;


    cout << "Digite o numero: " << endl;

    cin >> input;

    // cout << input << endl;

    str_isOddEven = isOddEven(input);
    str_isPositive = isPositive(input);

    cout << input << str_isOddEven << str_isPositive << endl;


    system("pause");

    return 0;
}