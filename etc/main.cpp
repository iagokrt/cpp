#include <iostream>
using namespace std;

#include "hello.cpp"

string world() {
    return "H e l l o , W o r l d !";
}


int main() {
    cout << hello() << endl;
    // cout << world() << endl;

    system("pause");

    return 0;
}