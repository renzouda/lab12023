#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void printNumberForTest(int secretNumber[]);
void printResultGame(bool endGame);
bool calculateIfWinOrLooseGame(string resultNumber[], int userNumber[]);

int main() {
	srand(time(NULL)); // for randon numbers
    int secretNumber[4];
    int userNumber[4];
    string resultNumber[4];
    int i,k;
    bool endGame = false;
    
    // initialize secret number with random numbers
    for(i=0; i<=3; i++){
    	secretNumber[i] =rand() % 4;
    }
    
    printNumberForTest(secretNumber);

    while(!endGame){

    	// capture user number
    	cout << "Deberá ingresar un número de 4 digitos, una vez por cada dígito" << endl;
    	for(i=0; i<=3; i++){
	    	cout << "Dígito [" << i+1 << "]: ";
        	cin >> userNumber[i];
	    }

	    // compare numbers
	    for(i=0; i<=3; i++){
	    	// Por defecto el número es malo
	    	resultNumber[i] = "malo";

	    	// intento averiguar si tuvo aciertos
	    	for(k=0; k<=3; k++){
	    		// si los números coinciden y están en la misma posición
	    		if(userNumber[i] == secretNumber[k] && i == k){
	    			resultNumber[i] = "bueno";
	    			break;
	    		// sino, si el numero ingresado por el usuario, está dentro de los numeros de la PC
	    		} else if(userNumber[i] == secretNumber[k]){
	    			resultNumber[i] = "regular";
	    		}
	    	}
	    }
	    
	    endGame = calculateIfWinOrLooseGame(resultNumber, userNumber);
	    
    	printResultGame(endGame);
    }

	return 0;
}

void printNumberForTest(int secretNumber[]){
	int i;
	
    cout << "For test, the secret number is: ";
    for(i=0; i<=3; i++){
    	cout << secretNumber[i];
    }
    cout << endl << endl;
}

void printResultGame(bool endGame){
	cout << endl << endl;
	if (endGame == false){
        cout << "Intenta nuevamente =)" <<endl;	
    } else {
    	cout << "Felicitaciones, ganaste !!!" <<endl;
    }
}

bool calculateIfWinOrLooseGame(string resultNumber[], int userNumber[]){
	int i;
	bool endGame;

	cout << endl << endl;

	// fuerzo a terminar el juego
	endGame = true;

	cout << "Ahora te mostraremos tus aciertos según el número ingresado" << endl;

	// recorro la 4 posiciones de los números
    for(i=0; i<=3; i++){
    	// muestro cada numero ingresado por el usuario y cómo le fue respecto al número secreto
    	cout << userNumber[i] << "[" << resultNumber[i] << "] ";

    	// si algun acierto NO fue bueno
    	if(resultNumber[i] != "bueno"){
    		// aún no termina el juego
    		endGame = false;
    	}
    }

    return endGame;
}