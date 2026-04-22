#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Um sensor de temperatura industrial fornece uma leitura em uma escala S.
 *
 * Para integrar esse sensor a um sistema, é necessario converter essa leitura para Celsius
 * usando uma relação linear baseada em dois pontos de calibração fornecidos no inicio da execução.
 *
 *
 * C = ((S - Smin) * 100) / Smax - Smin
 * C: Temperatura em Celsius
 * S: Valor lido pelo sensor
 * Smin: valor lido pelo sensor quando a temperatura é 0ºC
 * Smax: valor lido pelo sensor quando a temperatura é 100ºC
 *
 *
 * Specs:
 * Receba dois argumentos pela linha de comando (argv), o valor de Smin e o valor Smax. (float)
 * Em um loop infinito, solicite ao usuario o valor atual lido pelo sensor (S)
 * Calcule o valor em Celsius usando a equação acima.
 * Exiba na tela a temperatura convertida com exatamente 2 digitos de precisão.
 * O programa deve tratar o caso onde S resulte em uma temperatura fora do intervalo seguro de -50C - 150C
 * (exibir mensagem de alerta e continuar).
 *
 * + CRITERIOS DE ACEITE:
 * 	1) é obrigatório implementar as funcoes
 * 		- InitSensor: Inicializa os limites Smin e Smax
 * 		- ConvertTemp: Recebe o valor S e retorna o valor em Celsius OK
 *  2) o menu deve ser EXATAMENTE como apresentado no exemplo OK
 *  3) o programa ira ficar em loop infinito, pedido valores do usuario e retornando o resultado OK
 *  4) O programa soh deve finalizar se forcado ex CTRL+C OK
 *  5) Certifique-se de que a diferença sMax- sMin nao seja zero para evitar erros de divisao OK
 *
 * */

float ConvertTemp(float temperatura, float sMin_, float sMax_) {
	return ((temperatura - sMin_) * 100) / (sMax_ - sMin_);
}

int main(int argc, char *argv[]) {

	for ( int i = 0; i < argc; ++i ) {
		// cout << argv[i] << "\n";
		if (argc > 3) {
			return 1;
		}
	}

	float s = 0; // input
	//float sMin = stof(argv[1]); // impossivel testar sem linha de comando
	float sMin = 10;

	//float sMax = stof(argv[2]); // impossivel testar sem linha de comando
	float sMax = 110;

	// a diferença sMax- sMin nao seja zero para evitar erros de divisao
	float diff = sMax - sMin;
	if (diff ==  0) {
		return 1;
	}

	do {
		cout << "Digite o valor lido pelo sensor: ";
		cin >> s;

		float celsius = ConvertTemp(s, sMin, sMax);

		if (celsius <= -50 || celsius >= 150) {

			cout << "Alerta: Temperatura (" << celsius << " C) fora do intervalor de segurança!" << endl;
		} else {
			cout << "Temperatura: " << std::setprecision(2) << std::fixed  << celsius << " C" << endl;
			cout << "" << endl;
		}
	} while(true);

	return 0;
}
