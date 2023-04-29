
#include<iostream>
using namespace std;

int main() {
	float i;
	int numer;
	numer = 1;
	for (i=1;i<=50;i++) {
		cout << numer << endl;
		numer = numer+4;
		cout << numer << endl;
		numer = numer-2;
	}
	return 0;
}

