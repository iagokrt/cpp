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

string validaData(int dia, int mes, int ano) {
    const int maxAno = 2015;
    int anoBissexto;
    string validade;

    // ano
    if (ano <= maxAno) {
        validade = "data invalida";
    } else {
        validade = "data valida";
    }
    
    anoBissexto = bissexto(ano);
    // mes
    if (mes <= 0 || mes >= 13) {
        validade = "data invalida";
    } else {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            // mes
            if (dia > 0 && dia <= 30) {
                validade = "data valida";
            } else {
                validade = "data invalida";
            }
        } else if (mes == 2) {
            if (anoBissexto==1) {
                // mes fev
                if (dia > 0 && dia <= 29) {
                    validade = "data valida";
                } else {
                    validade = "data invalida";
                }
            } else if (anoBissexto == 0) {
                if (dia > 0 && dia <= 28) {
                    validade = "data valida";
                } else {
                    validade = "data invalida";
                }
            }
        } else {
            if (dia > 0 && dia <= 31) {
                    validade = "data valida";
             } else {
                    validade = "data invalida";
             }

        }
    }
    return validade;
}

int main() {

    int d, m, a;
    string result;

    cout << "Dia: " << endl;

    cin >> d;

    cout << "Mes: " << endl;

    cin >> m;

    cout << "Ano: " << endl;

    cin >> a;

    result = validaData(d,m,a);

    cout << result << endl;

    return 0;
}