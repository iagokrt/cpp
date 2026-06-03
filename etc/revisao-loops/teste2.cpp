#include <iostream>
using namespace std;

/*

*/
float calc_media(int valores_res[5], int total) {
    int sum, i, media;
    for (i = 0; i < 5; i++) {
        sum += valores_res[i];
    }
    media = (sum / total);
    return media; 
}

int main() {

    int valores_a[5] = {1, 2, 3, 4, 5};
    int valores_b[5] = {10, 20, 30, 40, 50};
    int valores_res[5] = {0, 0, 0, 0, 0};

    int i;

    float sum = 0;
    float media = 0;
    bool hasNegative = false;


    cout << "--- Multiplicação de Listas para o INPE ---" << endl;

    // EXIBIR VETOR 1
    cout << "vetor 1: [";
    for (i = 0; i < 5; i++) {
        if(i == 4) {
            cout << valores_a[i] << "";
        } else {
            cout << valores_a[i] << ", ";
        }
    }
    cout << "]" << endl;

    //cout << "(expected)vetor 1: " << "[1, 2, 3, 4, 5]" << endl; // TEST

    // EXIBIR VETOR 2
    cout << "vetor 2: [";
    for (i = 0; i < 5; i++) {
        if(i == 4) {
            cout << valores_b[i] << "";
        } else {
            cout << valores_b[i] << ", ";
        }
    }
    cout << "]" << endl;

    //cout << "(expected) vetor 2: " << "[10, 20, 30, 40, 50]" << endl; // TEST

    /* RESULTADOS */

    cout << endl << "--- Resultados ---" << endl;

    //cout << "Nova lista de produtos (elemento a elemento):" << endl;

    // CALCULA VALORES E ARMAZENA NO NOVO VETOR (a*a) + (b*b) = r[x]
    for (i = 0; i < 5; i++) {
        valores_res[i] = ((valores_a[i]) * (valores_a[i])) + (valores_b[i]) * (valores_b[i]);
    }

    // EXIBE
    cout << "Nova lista de produtos (elemento a elemento): [";
    for (i = 0; i < 5; i++) {
        if(i == 4) {
            cout << valores_res[i] << "";
        } else {
            cout << valores_res[i] << ", ";
        }
    }
    cout << "]" << endl;

    //cout << "(expected)Nova lista de produtos (elemento a elemento):[101, 404, 909, 1616, 2525]" << endl; // TEST

    // CALCULAR MEDIA DO VETOR RESULTADO
    media = calc_media(valores_res, 5);
    // for (i = 0; i < 5; i++) {
    //     sum += valores_res[i];
    // }
    // media = (sum / 5);

    cout << "Média dos elementos da lista de produtos: " << media << endl;

    // VERIFICAR SE EXISTE NEGATIVO NO ARRAY DE RESULTADOS
    for (i = 0; i < 6; i++) {
        if(valores_res[i] < 0) {
            hasNegative = true;
        }
    }
    // EXIBE CASO HAJA NEGATIVO, SENAO, EXIBE "Não há valores negativos."
    if(hasNegative) {
        cout << "Há valores negativos!";
    } else {
        cout << "Não há valores negativos.";
    }

    return 0;
}