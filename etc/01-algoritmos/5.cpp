#include <iostream>
#include <locale>

using namespace std;
/**
<pre>
5. 
a) Leia a cotação do dólar (USD/BRL)
b) Leia um valor em dólares.
c) Converta esse valor para Real 
d) Mostre o resultado
</pre>
*/

int main() {
    setlocale(LC_ALL, ""); // ajusta para o encoding do sistema

    float dollar, amount, value;

    wcout << L"Digite Cotação (USD):";
    cin >> dollar;

    wcout << L"Digite quantidade de dólares:";
    cin >> amount;

    wcout << endl;

    wcout << L"Cotação (USD):" << dollar << " Reais" << endl;
    wcout << L"Quantidade (USD):" << amount << " $" << endl;

    value = dollar * amount;

    wcout << L"Total em R$:" << value << endl;

    system("pause");

    return 0;
}