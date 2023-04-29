#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

string calculateWin(int jugadaUsuario, int jugadaPC);
string calculateWinGame(string game[], int plays);

int main(){
	int plays=3;
	int i;
	string game[plays];
	int jugadaUsuario, jugadaPC;
	string opcionesJuego[4];
	
	opcionesJuego[0] = "";
	opcionesJuego[1] = "Piedra";
	opcionesJuego[2] = "Papel";
	opcionesJuego[3] = "Tijera";

	srand(time(NULL));	

	for(i=0;i<plays;i++){

		cout << "Ingresar 1-Piedra 2-Papel 3-Tijera: ";
		cin >> jugadaUsuario;

		jugadaPC=rand()%4; // Revisar xq a veces sale un 0
		cout << "JugadaUsuario: "<< opcionesJuego[jugadaUsuario]<< "[" << jugadaUsuario << "]"<<endl;
		cout << "JugadaPC: "<< opcionesJuego[jugadaPC]<< "[" << jugadaPC << "]"<<endl;
		

		game[i] = calculateWin(jugadaUsuario, jugadaPC);
		
		cout << "Jugada #"<< i+1 << " la ganó: " << game[i] <<endl<<endl;

	}

	cout << "El ganador es: " <<calculateWinGame(game, plays);
}

string calculateWin(int jugadaUsuario, int jugadaPC){
	string playerWin;
	int piedra = 1;
	int papel = 2;
	int tijera = 3;

	if(jugadaUsuario==piedra && jugadaPC==tijera){
		playerWin = "usuario";
	} else if (jugadaUsuario==piedra && jugadaPC==piedra){
		playerWin = "empate";
	} else if (jugadaUsuario==piedra && jugadaPC==papel){
		playerWin = "pc";
	}
	
	if(jugadaUsuario==tijera && jugadaPC==piedra){
		playerWin = "pc";
	} else if (jugadaUsuario==tijera && jugadaPC==tijera){
		playerWin = "empate";
	} else if (jugadaUsuario==tijera && jugadaPC==papel){
		playerWin = "usuario";
	}
	
	if(jugadaUsuario==papel && jugadaPC==piedra){
		playerWin = "usuario";
	} else if (jugadaUsuario==papel && jugadaPC==papel){
		playerWin = "empate";
	} else if (jugadaUsuario==papel && jugadaPC==tijera){
		playerWin = "pc";
	}

	return playerWin;
}

string calculateWinGame(string game[], int plays){
	int contador, i;
	contador = 0;

	for(i=0;i<plays;i++){
		if(game[i] == "usuario"){
			contador++;
		}else if(game[i] == "pc"){
			contador--;
		}
	}

	if(contador > 0){
		return "jugador";
	} else if(contador < 0){
		return "pc";
	} else {
		return "empate";
	}
}