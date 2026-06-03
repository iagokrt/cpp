#include <iostream>
using namespace std;

// 1
// Peça ao usuário para inserir dois números inteiros e exiba o resultado da adição, 
// subtração, multiplicação e divisão desses números. 

int main() {
    int a, b;
    
    cout << "Digite A:";
    cin >> a;
    cout << "Digite B:";
    cin >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;

    return 0;
}

// int calc_soma(int a, int b) {

// }
// int calc_sub(int a, int b) {

// }
// int calc_mult(int a, int b) {

// }
// int calc_div(int a, int b) {

// }
// int res_1, res_2, res_3, res_4;
// res_1 = calc_soma(a, b);
// res_2 = calc_sub(a, b);
// res_3 = calc_mult(a, b);
// res_4 = calc_div(a, b);