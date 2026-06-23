// MATRIZ 2x2 + CLASSE + LOOP
#include <iostream>
using namespace std;

class Matriz2x2{
private:
    int m[2][2];

public:
    void lerValores(){
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++){
                cout<<"Digite o valor ["<<i<<"]["<<j<<"]: ";
                cin>>m[i][j];
            }
    }

    int determinante(){
        return m[0][0]*m[1][1] - m[0][1]*m[1][0];
    }

    bool ehSingular(){
        return determinante()==0;
    }
};

int main(){
    Matriz2x2 mat;

    while(true){
        mat.lerValores();

        if(mat.ehSingular())
            cout<<"A matriz eh singular"<<endl;
        else
            cout<<"O determinante eh: "<<mat.determinante()<<endl;
    }

    return 0;
}