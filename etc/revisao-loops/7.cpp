#include <iostream>
using namespace std;



int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);

}

int main() {
    int input, response;

    cout << "digite um numero" << endl;

    cin >> input;
    
    response = factorial(input);

    cout << response;

    return 0;

}