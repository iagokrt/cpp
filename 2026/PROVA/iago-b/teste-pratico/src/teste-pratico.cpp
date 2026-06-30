#include <iostream>
#include <cinttypes>
#include <cstdio>

#include <string>
#include <iomanip>
#include <string_view>
#include <type_traits>

using namespace std;

class DecodificadorBitwise {
private:
	char str[30] = "rwx";
	uint8_t mask;
public:
	int validar(int size, std::string text) {
		//cout << "size: " << size << endl;
		/* interrompe operacao para valores diferentes de 3 ou 4 de tamanho da string */
		if (size != 3 && size != 4) {
			cout << "Tamanho incorreto." << endl;
			return -1; // indica erro
		} else if (size == 4) {
			// pode ser condicao de saida - verificar se a string é "sair"
			if (text == "sair") {
				return 1; // indica saida
			} else {
				cout << "Tamanho incorreto." << endl;
				return -1; // indica erro
			}
		}
		else {
			//cout << "test: " << text << endl;
			for (int i =0; i < text.size(); i++) {
				if (text[i] != 'r' && text[i] != 'w' && text[i] != 'x' && text[i] != '-') {
					// valida se o texto da string contêm algo diferente de rwx-
					return 2;
				}
			}
			return 0;
		}
	}

	int bitwise(std::string permissionString) {
		//cout << "permissionString: " << permissionString << endl;
		//char pos1 = permissionString[0];
		//char pos2 = permissionString[1];
		//char pos3 = permissionString[2];

		int sum = 0; // soma em decimal
		//cout << "pos1: " << pos1 << endl;
		//cout << "pos2: " << pos2 << endl;
		//cout << "pos3: " << pos3 << endl;

		if (permissionString[0] == 'r') {
			//cout << "add 4" << endl;
			sum += 4;
		}
		if (permissionString[1] == 'w') {
			sum += 2;
		}
		if (permissionString[2] == 'x') {
			sum += 1;
		}
		return sum;
	}
};

int main() {

	while(true) {
		string input = "rwx";
		int size=0;

		cout << "Digite a string de permissao (ex: rwx, r-x):";
		cin >> input;

		// descobrir o tamanho do input de string inserido pelo usuario
		while(input[size] != '\0') {
			//cout << input[size] << endl;
			size++;
		}

		DecodificadorBitwise decoder; // inicializa o objeto da classe Decodificador

		int validation = decoder.validar(size, input); // chama o metodo de validacao
		// -1 = condicao de saida por erro
		// 0 = pode seguir o loop
		// 1 = condicao de saida por escolha
		// 2 = mascara invalida detectada

		// 3 = mascara binaria em decimal
		//

		if (validation == 1) {
			cout << "encerrando o programa." << endl;
			return 1;
		} else  if (validation == 2) {
			cout << "Mascara invalida detectada" << endl;
		} else {
			int bitwiseDecimal = decoder.bitwise(input);
			cout << "A mascara binaria em decimal eh: " << bitwiseDecimal << endl;
		}
	}
	return 0;
}
