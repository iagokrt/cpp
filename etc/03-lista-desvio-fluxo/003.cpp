#include <iostream>

using namespace std;

// 3 - digite um ano e informe se é bissexto ou n 


// Como determinar se um ano é bissexto?
// 1- O ano é bissexto (tem 366 dias).
// 2- O ano não é um ano bissexto (tem 365 dias).
int main () {
    int ano;

    cout << "Digite um ano:" << endl;

    cin >> ano;

    cout << "ano: " << ano << endl;

    // =IF(OR(MOD(A1,400)=0,AND(MOD(A1,4)=0,MOD(A1,100)<>0)),"Leap Year", "NOT a Leap Year")  

    if (ano % 4 == 0) {
        if (ano % 400 == 0) {
            // todo ano divisivel por 400 eh bissexto
            cout << "ano: " << ano <<  " e bissexto" << endl;
            // if(ano % 100 == 0) {
            //     // todo ano divisivel por 400 E 100 ao mesmo tempo eh bissexto
            //     cout << "ano: " << ano <<  " e bissexto" << endl;
            // }
        } else if (ano % 100 == 0) {
            // todo ano divisivel por 100 mas nao por 400 nao eh bissexto
            cout << "ano: " << ano <<  " nao e bissexto" << endl;
        } else {
            // todo ano divisivel por 4 mas nao por 100 eh bissexto
            cout << "ano: " << ano <<  " e bissexto" << endl;
        }

    } else {
        cout << "ano: " << ano <<  " nao e bissexto" <<endl;
    }

   
    


    return 0;
}