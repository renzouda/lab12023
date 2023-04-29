
#include<iostream>
using namespace std;

int main() {
	float cont;
	int n;
	float x;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	cont = 0;

	// Mover este bloque a una función, con el fin de que se pueda re utilizar en otros ejercicios
	for (x=1;x<=n;x++) {
		if ((n%x)==0) {
			cont = cont+1;
		}
	}
	if (cont==2) {
		cout << n << " es un numero primo" << endl;
	} else {
		cout << n << " no es un numero primo" << endl;
	}
	return 0;
}

