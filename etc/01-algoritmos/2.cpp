#include <iostream>
using namespace std;
/**
2. Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.
<pre>
-inicializa comprimento, largura, area
-recebe inputs (numerico) do comprimento e largura
-multiplicar comprimento * largura
-armazena o resultado da multiplicacao na variavel area
-exibir em tela variavel area
</pre>

*/

int area(int c, int l) {
    return c*l;
}

int main() {
    int comprimento = 10, largura = 5; 

    cout << area(comprimento, largura) << endl;

    system("pause");

    return 0;
}