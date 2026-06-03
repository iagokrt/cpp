#include <iostream>
using namespace std;


float fah(float celsius) {
    float result;

    result = ((celsius * 9) / 5) + 32;

    return result;
}

int main() {

    int table_end = 100;
    int g;

    //int fixed = -10;
    //float res;
    //res = fah(fixed);

    cout << "--------------------" << endl;
    cout << "Celsius (C) | Fahrenheit (F)" << endl;
    cout << "--------------------" << endl;

    for(g = -10; g <= table_end; g++) {
        cout << g  << " | " << fah(g) << endl;
    }
    
    return 0;
}