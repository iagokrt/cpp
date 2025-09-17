#include <iostream>
using namespace std;

/*
 * Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5, mas não simultaneamente pelos dois.
*/

int main() {

	int n, remainder3, remainder5;

	cout << "Digite um numero(int) para verificar se é divisivel por 3 ou 5 (exclusivo)" << endl;

	cin >> n;

	cout << n << endl;

	if (n % 3 == 0 && n % 5 != 0) {
		cout << n << " é divisível apenas por 3" << endl;
	} else if (n % 5 == 0 && n % 3 != 0) {
		cout << n << " é divisível apenas por 5" << endl;
	}

	return 0;
}