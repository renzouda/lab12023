// Juego TA TE TI

void initBoard(char *board[][]);
void printBoard(char board[][]);
void printFriendlyBoard();
int captureSelectedPosition();
bool validateSelectedPosition(int selectedPosition, char board[][]);
void updateBoard(char *board[][], int selectedPosition, int playerTurn);
bool calculateWinnerGame(char board);
int changePlayerTurn(int playerTurn);

int main(){

	char board[3,3];
	int playerTurn; // [1 to player one and 2 to player two]
	int selectedPosition;
	bool playGame = true;
	bool movIsValid;

	initBoard(&board);

	do {

		printBoard(board);
		
		movIsValid = false; // initialize with each turn

		while(!movIsValid){

			selectedPosition = captureSelectedPosition();

			movIsValid = validateSelectedPosition(selectedPosition, board);

		}

		

		updateBoard(&board, selectedPosition, playerTurn); // this is a procedure

		// TODO: convert to procedure with punter
		playerTurn = changePlayerTurn(playerTurn); // this is a function. 
		
		

		if(calculateWinnerGame(board)){

			printBoard(board);

			playGame = false; // flag end game

		}

	} while (playGame);
	

}

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

int captureSelectedPosition(){
	int selectedPosition;

	printFriendlyBoard();

	cout << "Ingresar la posición en la que desea jugar:";
	cin >> selectedPosition;

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
	if(playerTurn == 1){
		printChar = "x";
	} else {
		printChar = "o";
	}

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

bool calculateWinnerGame(char board){
	//TODO implement this function
}

int changePlayerTurn(int playerTurn) {
	if(playerTurn == 1){
		return 2;
	} else {
		return 1;
	}
}