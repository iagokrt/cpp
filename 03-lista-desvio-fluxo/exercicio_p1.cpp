//============================================================================
// Name        : prova1.cpp
// Author      : IAGO B. CARNEIRO
// Version     :
// Copyright   :
// Description :
// um posto esta vendendo combustivel com os seguintes descontos:
// TIPO DE COMBUSTIVEL
// 0=ALCOOL
// 1=GASOLINA
// CALCULE O VALOR A SER PAGO PELO CLIENTE
// PRECO DA GASOLINA 6.36
// PRECO DO ALCOOL 4.97
//============================================================================

#include <iostream>
using namespace std;

/*
 * type=0 => alcool
 * type=1 => gasolina
 * */
float calculaDisconto(float amount, int type) {

	float discount;
	if (type == 0) {
		if (amount <= 20) {
			// DESCONTO DE 3% POR LITRO
			discount = 0.03;
		} else if (amount > 20) {
			// DESCONTO DE 5% POR LITRO
			discount = 0.05;
		}
	} else if (type == 1) {
		if (amount <= 20) {
			// DESCONTO DE 4% POR LITRO
			discount = 0.04;
		} else if (amount > 20) {
			// DESCONTO DE 6% POR LITRO
			discount = 0.06;
		}
	}

	return discount;
}

int main() {

	int tipo_combustivel;
	int litros_abastecer;
	float valor_total_sem_desconto;
	float total;

	const float preco_gasolina = 6.36;
	const float preco_alcool = 4.97;

	float valor_por_litro; // do combustivel selecionado
	string label_combustivel;

	cout << "Selecione o combustível (0-Alcool, 1-Gasolina):" << endl;

	cin >> tipo_combustivel;

	if(tipo_combustivel == 0) {
		valor_por_litro = preco_alcool;
		label_combustivel = "Alcool";
	} else if (tipo_combustivel == 1) {
		valor_por_litro = preco_gasolina;
		label_combustivel = "Gasolina";
	}

	cout << "Entre com o volume em litros:" << endl;

	cin >> litros_abastecer;

	cout << label_combustivel << " (valor): " << valor_por_litro << endl;

	valor_total_sem_desconto = valor_por_litro * litros_abastecer;

	cout << "Total (sem descontos):" << valor_total_sem_desconto << endl;

	total = valor_total_sem_desconto - calculaDisconto(litros_abastecer, tipo_combustivel) * valor_total_sem_desconto;

	cout << "Total (com descontos):" << total;


	return 0;
}
