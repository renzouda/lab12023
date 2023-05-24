// Juego TA TE TI
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

void initBoard(char *board[][]);
void printBoard(char board[][]);
void printFriendlyBoard();
int captureSelectedPosition();
bool validateSelectedPosition(int selectedPosition, char board[][]);
void updateBoard(char *board[][], int selectedPosition, int playerTurn);
bool isPlayerWinnerTheGame(char board[][], int playerTurn);
int changePlayerTurn(int playerTurn);

int main(){

	char board[3,3];
	int playerTurn = 1; // [1 to player one and 2 to player two]
	int selectedPosition = 0;
	bool playGame = true;
	bool movIsValid = false;
	int playCounter = 0;

	initBoard(&board);

	do {

		printBoard(board);
		
		movIsValid = false; // initialize with each turn

		while(!movIsValid){

			if(playerTurn == 2){
				selectedPosition = getSelectedPositionRandom();
			} else {
				selectedPosition = captureSelectedPosition();
			}

			movIsValid = validateSelectedPosition(selectedPosition, board);

		}

		updateBoard(&board, selectedPosition, playerTurn); // this is a procedure
		
		// from the fifth move, there may be a winner
		if(playCounter > 5){
			if(isPlayerWinnerTheGame(board, playerTurn)){
				printBoard(board);
				playGame = false; // flag end game
			} else if (playCounter == 9){
				cout<<"Empate";
				playGame = false;
			}
		}

		playerTurn = changePlayerTurn(playerTurn); // this is a function. 

	} while (playGame);
	

}

// initBoard initialize the charset with blanks spaces
void initBoard(char *board[][]){
	int i,j;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			*board[i,j] = " "; // init board with space blanks
		}
	}
}

void printBoard(char board[][]){
	int i,j;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<board[i,j]<<" ";
		}
		cout<<endl;
	}
}

// captureSelectedPosition returns the selected position from user
// the position can be between 1 and 9
int captureSelectedPosition(){
	int selectedPosition;

	printFriendlyBoard();

	cout << "Ingresar la posición en la que desea jugar:";
	cin >> selectedPosition;

	// TODO: validar que solo se ingresen números del 1 al 9

	return selectedPosition;
}

void printFriendlyBoard(){
	char board[3,3];

	int i,j;
	int counter = 1;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<< counter <<" ";
			counter++;
		}
		cout<<endl;
	}
}

bool validateSelectedPosition(int selectedPosition, char board[][]){
	bool flagValidPosition = false;

	switch(selectedPosition){
	case 1: 
		if (board[0][0] == " "){
			flagValidPosition = true;
		}
		break;
	case 2: 
		if (board[0][1] == " "){
			flagValidPosition = true;
		}
		break;
	case 3: 
		if (board[0][2] == " "){
			flagValidPosition = true;
		}
		break;
	case 4: 
		if (board[1][0] == " "){
			flagValidPosition = true;
		}
		break;
	case 5: 
		if (board[1][1] == " "){ // this is the center point of board, the good point of the game
			flagValidPosition = true;
		}
		break;
	case 6: 
		if (board[1][2] == " "){
			flagValidPosition = true;
		}
		break;
	case 7: 
		if (board[2][0] == " "){
			flagValidPosition = true;
		}
		break;
	case 8: 
		if (board[2][1] == " "){
			flagValidPosition = true;
		}
		break;
	case 9: 
		if (board[2][2] == " "){
			flagValidPosition = true;
		}
		break;
	}		

	return flagValidPosition;
}

void updateBoard(char *board[][], int selectedPosition, int playerTurn){
	char printChar;

	printChar = getPrintChar(playerTurn);

	switch(selectedPosition){
	case 1: 
		board[0][0] = printChar;
		break;
	case 2: 
		board[0][1] = printChar;
		break;
	case 3: 
		board[0][2] = printChar;
		break;
	case 4: 
		board[1][0] = printChar;
		break;
	case 5: 
		board[1][1] = printChar;
		break;
	case 6: 
		board[1][2] = printChar;
		break;
	case 7: 
		board[2][0] = printChar;
		break;
	case 8: 
		board[2][1] = printChar;
		break;
	case 9: 
		board[2][2] = printChar;
		break;
	}	
}

bool isPlayerWinnerTheGame(char board[][], int playerTurn){
	int i,k,counterPrints = 0;
	char before;
	char printChar;
	bool winnerFlag = false;

	printChar = getPrintChar(playerTurn);
	
	// REVISO SI GANO EN ALGUNA FILA
	for(i=0; i<3; i++){
		counterPrints = 0;

		for(k=0; k<3; k++){ 
			if(board[i][k] == printChar){ // Si en esa posicion del tablero el caracter es igual al del usuario en juego
				counterPrints++;
			}
		}

		if(counterPrints == 3){ // Si en la fila conte 3 caracteres iguales del jugador
			winnerFlag = true;
			break;
		}
	}

	if(winnerFlag){
		return winnerFlag; 
	}

	// REVISO SI GANO EN ALGUNA COLUMNA
	for(i=0; i<3; i++){
		counterPrints = 0;

		for(k=0; k<3; k++){ 
			if(board[k][i] == printChar){
				counterPrints++;
			}
		}

		if(counterPrints == 3){
			winnerFlag = true;
			break;
		}
	}

	if(winnerFlag){
		return winnerFlag; 
	}

	// REVISO DIAGONAL IZQUIERDA DERECHA 
	if(board[0][0] == printChar && board[1][1] == printChar && board[2][2] == printChar){
		return true;	
	}

	// REVISO DIAGONAL DERECHA IZQUIERDA DE ARRIBA HACIA ABAJO
	if(board[0][2] == printChar && board[1][1] == printChar && board[2][0] == printChar){
		return true;
	}

	return winnerFlag;

}

int changePlayerTurn(int playerTurn) {
	if(playerTurn == 1){
		return 2;
	} else {
		return 1;
	}
}

char getPrintChar(int playerTurn){
	char printChar;

	if(playerTurn == 1){
		printChar = "x";
	} else {
		printChar = "o";
	}

	return printChar;
}

int getSelectedPositionRandom(){
	srand(time(NULL));
	return and()%9+1; // return values 1-9
}