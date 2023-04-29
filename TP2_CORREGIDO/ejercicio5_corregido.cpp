
#include<iostream>
using namespace std;

bool isPrime(int num);

int main() {
	
	int number;
	cout << "Ingrese un numero para saber si es primo: " << endl;
	cin >> number;
	
	if (isPrime(number)) {
		cout << number << " SI es primo =)" << endl;
	} else {
		cout << number << " NO es primo =(" << endl;
	}

	return 0;
}

bool isPrime(int num){
	int i, count = 0;
	
	for (i=1;i<=num;i++) {
		if ((num%i)==0) {
			count = count+1;
		}
	}

	if (count==2) {
		return true; // This number is divisible by two numbers and the rest of the divisions is zero.
	} else {
		return false;
	}
}