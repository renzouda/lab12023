// Juego TA TE TI


void initBoard(char *board[][]);
void printBoard(char board[][]);
int captureSelectedPosition();
bool validateSelectedPosition(int selectedPosition);
void updateBoard(char *board[][], int selectedPosition, int playerTurn);
bool calculateWinnerGame(char board);
int changePlayerTurn(int playerTurn);

int main(){

	char board[3,3];
	int playerTurn = 1; // [1: Player one ; 2: Player two]
	int selectedPosition;
	bool playGame = true;
	bool movIsValid;

	initBoard(&board);

	do {

		printBoard(board);
		
		movIsValid = false; // initialize with each turn

		while(!movIsValid){ // TODO: cambiar por do while

			selectedPosition = captureSelectedPosition();

			movIsValid = validateSelectedPosition(selectedPosition);

		}

		

		updateBoard(&board, selectedPosition, playerTurn); // this is a procedure

		playerTurn = changePlayerTurn(playerTurn); // this is a function
		
		

		if(calculateWinnerGame(board)){

			printBoard(board);

			playGame = false; // flag end game

		}

	} while (playGame);
	

}

void initBoard(char &board[][]){
	//TODO implement this function
}

void printBoard(char board[][]){
	//TODO implement this function
}

int captureSelectedPosition(){
	//TODO implement this function	
}

bool validateSelectedPosition(int selectedPosition){
	//TODO implement this function		
}

void updateBoard(char *board[][], int selectedPosition, int playerTurn){
	//TODO implement this function
}

bool calculateWinnerGame(char board){
	//TODO implement this function
}

int changePlayerTurn(int playerTurn) {
	//TODO implement this function	
}