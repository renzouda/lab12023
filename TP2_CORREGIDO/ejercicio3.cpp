

#include<iostream>
using namespace std;

int main() {
	float descuento;
	string efectivo;
	string plan;
	cout << "Para saber que descuento le corresponde, ingrese cual es su plan(A, B, C, D, otro" << endl;
	cin >> plan;
	cout << "¿Va a pagar en efectivo? (si, no)" << endl;
	cin >> efectivo;
	if (efectivo=="si") {
		cout << "Tiene descuento del 5% por pagar en efectivo" << endl;
	} else {
		cout << "" << endl;
	}
	if (plan=="A") {
		cout << "El descuento por el Plan es del 100%" << endl;
	} else {
		if (plan=="B" || plan=="C") {
			cout << "El descuento por el Plan es del 90%" << endl;
		} else {
			if (plan=="D") {
				cout << "El descuento por el Plan es del 50%" << endl;
			} else {
				if (plan=="otro") {
					cout << "El descuento por el Plan es del 25%" << endl;
				} else {
					cout << "No le corresponde descuento" << endl;
				}
			}
		}
	}
	return 0;
}

