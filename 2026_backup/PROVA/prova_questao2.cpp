#include <iostream>
#include <iomanip>

using namespace std;

/**
 * mesma logica do programa anterior mas encapsulando a logica do sensor em uma Classe chamada SensorTermico
 */


class SensorTermico {
private:
	float sMin = 10;
	float sMax = 110;

public:
	SensorTermico(float sMin, float sMax, float temperatura) {
		this -> sMin = sMin;
		this -> sMax = sMax;
	}
	float ConvertTemp(float temperatura, float sMin, float sMax) {
		return ((temperatura - sMin) * 100) / (sMax - sMin);
	}
};

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

		SensorTermico sensor1(sMin, sMax, s);

		float celsius = sensor1.ConvertTemp(sMin, sMax, s);

		if (celsius <= -50 || celsius >= 150) {
			cout << "Alerta: Temperatura (" << celsius << " C) fora do intervalor de segurança!" << endl;
		} else {
			cout << "Temperatura: " << std::setprecision(2) << std::fixed  << celsius << " C" << endl;
			cout << "" << endl;
		}
	} while(true);

	return 0;
}
