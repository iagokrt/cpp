#include <iostream>
using namespace std;

string triangles(int a, int b, int c) {
    string definition;

     // if(condicao pra ser triangulo?) 
            // a + b > c
            // a + c > b
            // b + c > a
        // nao é triangulo?
    if ((a+b<c) || (a+c < b) || (b+c < a)) {
        return definition = "nao eh triangulo!";
    }

    if (a == b && b == c) {
        definition = "Equilatero";
    } else if (a != b && b != c && c != a) {
        definition = "Escaleno";
    } else if (a == b || b == c || c == a) {
        definition = "Isosceles";
    } 
    // else {
       
    // }
    return definition;
}

int main() {
    int a, b, c;
    string result;

    cout << "Digite A: " << endl;
    cin >> a;

    cout << "Digite B: " << endl;
    cin >> b;
    
    cout << "Digite C: " << endl;
    cin >> c;

    result = triangles(a,b,c);
    
    cout << result;

    return 0;
}