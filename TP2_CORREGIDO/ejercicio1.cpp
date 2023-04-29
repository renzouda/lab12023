#include<iostream>
using namespace std;

int main() {
	string cochera; // garage
	float precio; // price
	string prop; // propertie
	string ubi; // location
	// se podrían definir las variables del mismo tipo en una sola línea
	

	cout << "Ingrese la ubicacion de la propiedad: " << endl; // podrías solicitar una letra informando al usuario la opción que corresponde
	// ejemplo A- Godoy Cruz, B- Ciudad, C- Las Heras
	cin >> ubi;
	cout << "Ingrese el tipo de propiedad (departamento o casa): " << endl;
	cin >> prop; // idem punto anterior
	cout << "Ingrese el precio de la propiedad: " << endl;
	cin >> precio;
	cout << "¿La propiedad tiene cochera? (si,no)" << endl;
	cin >> cochera; // se podría definir como un bool, si solo tiene dos opciones posibles
	if (ubi=="godoy cruz" && precio<=70000) { // el precio se debe definir como una constante, de esa forma es más facil modificar a futuro
		cout << "La inmobiliaria invierte" << endl;
	} else { // concatenar else if
		if (ubi=="godoy cruz" && precio>70000 && prop=="casa" && cochera=="si") {
			cout << "La inmobiliaria invierte" << endl;
		} else {
			if (ubi=="ciudad" && precio>100000) { // idem comentario de línea 21s
				cout << "La inmobiliaria no invierte" << endl;
			} else {
				if (ubi=="ciudad" && prop=="casa") {
					cout << "La inmobiliaria invierte" << endl;
				} else {
					if (ubi=="ciudad" && prop=="departamento" && cochera=="si") {
						cout << "La inmobiliaria si invierte" << endl;
					} else {
						if (ubi=="Las Heras" && prop=="departamento" && cochera=="si") {
							cout << "La inmobiliaria si invierte" << endl;
						} else {
							cout << "La inmobiliaria debe averiguar mas datos" << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

