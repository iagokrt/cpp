#include <iostream>
#include <locale>
using namespace std;
/**
<pre>
Construa um algoritmo para pagamento de comissão de vendedores de peças. 
<br>Considere que a comissão será de 5% do total da venda e que você tem seguintes dados:
- Preço unitário da peça
- Quantidade vendida
</pre>
*/

float commission(float $un, int amount) {
	// float unPeca = 2.5;
    // int quantidadeVendida = 4;
	
    float commission = 0;
    
    wcout << L"Valor unitário da peça=" << $un << endl;
    wcout << L"Quantidade Peças Vendidas=" << amount << endl;
    
    commission = ($un * amount) * 0.05;
   
    return commission;
}

int main () {
    setlocale(LC_ALL, ""); // ajusta para o encoding do sistema
    float unPeca = 2.5;
    int quantidadeVendida = 4;

    float resultado = commission(unPeca, quantidadeVendida);
    wcout << L"Comissão=" << resultado << "$";

    return 0;
}