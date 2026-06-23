// STRUCT + NEW/DELETE + VETORES + LOOP
#include <iostream>
using namespace std;

struct Vetores{
    int* A;
    int* B;
    int* soma;
};

int main(){
    int n;

    while(true){
        cout<<"Digite o tamanho dos vetores: ";
        cin>>n;

        Vetores v;
        v.A = new int[n];
        v.B = new int[n];
        v.soma = new int[n];

        cout<<"Digite os valores do vetor A:"<<endl;
        for(int i=0;i<n;i++)
            cin>>v.A[i];

        cout<<"Digite os valores do vetor B:"<<endl;
        for(int i=0;i<n;i++)
            cin>>v.B[i];

        for(int i=0;i<n;i++)
            v.soma[i] = v.A[i] + v.B[i];

        cout<<"O vetor soma eh:"<<endl;
        for(int i=0;i<n;i++)
            cout<<v.soma[i]<<endl;

        delete[] v.A;
        delete[] v.B;
        delete[] v.soma;

        v.A = nullptr;
        v.B = nullptr;
        v.soma = nullptr;
    }

    return 0;
}