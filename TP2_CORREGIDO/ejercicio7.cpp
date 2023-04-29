#include<iostream>
using namespace std;

int main() {
	float c;
	float num;
	float suma;
	float valordos;
	float valoruno;
	cout << "Ingrese un numero" << endl;
	cin >> num;
	valoruno = 0;
	valordos = 1;
	for (c=1;c<=num;c++) {
		cout << valoruno << endl;
		suma = valoruno+valordos;
		valoruno = valordos;
		valordos = suma;
	}
	return 0;
}

