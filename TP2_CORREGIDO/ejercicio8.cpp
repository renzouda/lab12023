#include<iostream>
using namespace std;

int main() {
	int c1;
	int c2;
	int c3;
	int numer;
	cout << "Escriba un numero: " << endl;
	cin >> numer;
	for (c1=numer;c1>=1;c1--) {
		for (c2=1;c2<=c1;c2++) {
			cout << "";
		}
		for (c3=c1;c3<=numer;c3++) {
			cout << "* ";
		}
		cout << "" << endl;
	}
	return 0;
}

