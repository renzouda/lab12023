
#include<iostream>
using namespace std;

int main() {
	int cantpersonas;
	int diasestadia;
	string lugar;
	cout << "Ingrese la cantidad de personas que viajan" << endl;
	cin >> cantpersonas;
	cout << "ingrese la cantidad de dias de la estadia: " << endl;
	cin >> diasestadia;
	cout << "ingrese el destino del viaje. (dentro de la provincia, dentro de Argentina o al exterior" << endl;
	cin >> lugar;
	if (lugar=="Dentro de la provincia") {
		if (cantpersonas<=2) {
			cout << "El regalo es: Entradas a un espectaculo" << endl;
		} else {
			cout << "El regalo es: 2 dias mas de estadia" << endl;
		}
	} else {
		if (lugar=="Dentro de Argentina") {
			if (cantpersonas<=2 && diasestadia<7) {
				cout << "El regalo es: 1 dia mas de estadia" << endl;
			} else {
				if (cantpersonas<=2 && diasestadia>=7) {
					cout << "El regalo es: Excursiones gratis" << endl;
				} else {
					if (cantpersonas>=3 && diasestadia<7) {
						cout << "El regalo es: Descuentos en espectaculos" << endl;
					} else {
						cout << "El regalo es: Excursiones gratis" << endl;
					}
				}
			}
		} else {
			if (lugar=="Al exterior") {
				if (cantpersonas<=2 && diasestadia<=7) {
					cout << "El regalo es: un juego completo de valijas" << endl;
				} else {
					cout << "El regalo es: excursiones gratis" << endl;
				}
			} else {
				if (diasestadia>=7) {
					cout << "El regalo es: cupones de descuento" << endl;
				} else {
					cout << "El raglo es: un juego completo de valijas" << endl;
				}
			}
		}
	}
	return 0;
}

