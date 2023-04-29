/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

//Realizar un algoritmo que permita a una máquina expendedora de gaseosas realizar su venta diaria. La máquina se carga con una cierta cantidad latas de gaseosa de distintos tipos para poder venderlas a un determinado precio (3.50$). Permite recibir monedas de 1$ y 50 centavos y da el vuelto cuando corresponda. Tiene un visor en donde va informando los distintos momentos: "Ingrese monedas para recibir la bebida", "Elija la bebida", "Retire su bebida", "Retire su vuelto", "Disculpe, no hay más bebidas".

int main() {
    
	int bebida, coin1, stock, decision;
	float dinero, penny50, precio, vuelto;
	
	stock = 10;
	
	while (stock > 0) {
	    
	    std::cout << "Desea comprar una bebida? (1 = si, 2 = no)" << std::endl;
	    std::cin >> decision;
	    
	    while(decision == 1) {
	   
	        cout << "Ingrese la cantidad de monedas de 1 peso ingresadas" << endl;
            cin >> coin1;
		
		    cout << "Ingrese la cantidad de monedas de 50 centavos ingresadas" << endl;
		    cin >> penny50;
		
		    dinero = dinero + coin1 + (penny50 / 2);
		
		    if (penny50 == 0) {
		    
			    dinero == coin1;
			
		    }
		
		    while (dinero >= 3.5) {
		    
			    cout << "Elija su bebida (1 = coca, 2 = fanta, 3 = sprite)" << endl;
			    cin >> bebida;
			
			    if (bebida == 1) {
				    cout << "Retire su bebida coca" << endl;
			    }
				    else if (bebida == 2){
				        std::cout << "Retire su bebida fanta" << std::endl;
				    }
				        else{
				            std::cout << "Retire su bebida sprite" << std::endl;
				        }
			
			    dinero = dinero - 3.5;
			
			    cout << "Su vuelto es: " << dinero << " pesos" << endl;
			    
			    stock = stock - 1;
			    
			    std::cout << "Desea comprar una bebida? (1 = si, 2 = no)" << std::endl;
	            std::cin >> decision;

	        }
		}
		
		if (decision == 2) {
		    
		std::cout << "Que tenga un buen dia!" << std::endl;
		break;
		
		}
		
		if (decision != 1 || decision != 2) {
		    
		    std::cout << "Ingreso una opcion invalida :(" << std::endl;
            std::cout << "Desea comprar una bebida? (1 = si, 2 = no)" << std::endl;
	        std::cin >> decision;
	        
		}
	}
	
	if (stock = 0){
	    
	std::cout << "Disculpe, no hay mas bebidas" << std::endl;

	}
	
	return 0;
	
}