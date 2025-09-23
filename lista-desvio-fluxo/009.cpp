#include <iostream>

using namespace std;

int bissexto(int ano) {
    int isBissexto;

    if (ano % 4 == 0) {
        if (ano % 400 == 0) {
            // todo ano divisivel por 400 eh bissexto
            // cout << "ano: " << ano <<  " e bissexto" << endl;
            return 1;
        } else if (ano % 100 == 0) {
            // todo ano divisivel por 100 mas nao por 400 nao eh bissexto
            // cout << "ano: " << ano <<  " nao e bissexto" << endl;
            return 0;
        } else {
            // todo ano divisivel por 4 mas nao por 100 eh bissexto
            // cout << "ano: " << ano <<  " e bissexto" << endl;
            return 1;
        }
    } else {
        // cout << "ano: " << ano <<  " nao e bissexto" <<endl;
        return 0;
    }
}

string aniver(int dia, int mes, int ano) {
    const int maxAno = 2015;
    int anoBissexto;
    string validade;

    // ano

    anoBissexto = bissexto(ano);
    if (anoBissexto == 1) {
        // eh bissexto 
    } else if (anoBissexto == 0) {
        // nao eh bissexto 
    }
    
    // mes
        // definicao de dias no mes
    if (mes < 0 || mes > 13) {
        validade = "data invalida";
        return validade;
    } else {
        validade = "data valida";
        // return validade;
    }

    // dia
        // validade do dia

    if (ano <= maxAno) {
        validade = "data invalida";
        return "data invalida";
    } else {
        validade = "data valida";
        return "data valida";
    }
}

int main() {
    return 0;
}