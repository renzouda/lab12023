/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

//Crear el programa asteriscos5 en el que se introduce un número entero y se crea una pirámide de asteriscos. Por ejemplo si se introduce el 6, el resultado sería:

	  //*
	 //***
	//*****
   //*******
  //*********
 //***********

int main() {
    
	string asterisco, espacio;
	int i, j, num;
	
	cout << "Ingrese un numero entero" << endl;
	cin >> num;
	
	asterisco = "*";
	
	for (i=1;i<=num;i++) {
	    
		for (j=num;j>=i;j--) {
		    
			espacio = " ";
			cout << espacio;
			espacio = " " + espacio;
			
		}
		
		cout << asterisco << endl;
		asterisco = asterisco + "**";
		
	}
	
	return 0;
	
}