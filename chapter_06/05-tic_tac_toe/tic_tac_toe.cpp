#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Tic-Tac-Toe Application

using namespace std;

const char X='x';
const char O='o';
const char EMPTY=' ';
const char TIE='T';
const char NO_ONE='N';

void instructions();
char askYesNo(string prompt);
int askNumber(string question, int high, int low);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);

int main() {
	int move;
	const int NUM_SQUARES=9;
	vector<char> board(NUM_SQUARES, EMPTY);

	instructions();

	char human=humanPiece();
	char computer=opponent(human);
	char turn=X;
	displayBoard(board);

	while (winner(board)==NO_ONE) {
		if (turn==human) {
			move=humanMove(board, human);
			board[move]=human;
		} else {
			move=computerMove(board, computer);
			board[move]=computer;
		}

		displayBoard(board);
		turn=opponent(turn);
	}

	announceWinner(winner(board), computer, human);

	return 0;
}

void instructions() {
	cout << "Welcome to Tic-Tac-Toe" << endl;
	cout << "======================" << endl << endl;

	cout << "The game where the human brain is pit against silicon processor in the ultimate arena." << endl << endl;
	cout << "Make your move by entering the number 0-8 which corresponds to the location as illustrated:" << endl << endl;

	cout << "         0 | 1 | 2" << endl;
	cout << "         ---------" << endl;
	cout << "         3 | 4 | 5" << endl;
	cout << "         ---------" << endl;
	cout << "         6 | 7 | 8" << endl << endl;

	cout << "Prepare yourself, human. The bettle is about to begin..." << endl << endl;
}

char askYesNo(string prompt) {
	char response;

	do {
		cout << prompt << " (y/n): ";
		cin >> response;
	} while (response!='y' && response!='n');

	return response;
}

int askNumber(string question, int high, int low) {
	int number;

	do {
		cout << question << " (" << low << "-" << high << "): ";
		cin >> number;
	} while (number<low && number>high);

	return number;
}

char humanPiece() {
	char goFirst=askYesNo("Do you want to go first?");
	char piece;

	if (goFirst=='y') {
		cout << "You will have the first move, and you will be " << X << endl;
		piece=X;
	} else {
		cout << "The computer will go first, you will be " << O << endl;
		piece=O;
	}

	return piece;
}

char opponent(char piece) {
	char opponent;

	if (piece==X) {
		opponent=O;
	} else {
		opponent=X;
	}

	return opponent;
}

void displayBoard(const vector<char>& board) {
	cout << "The current state of the game is:" << endl << endl;

	cout << "         " << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "         ---------" << endl;
	cout << "         " << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "         ---------" << endl;
	cout << "         " << board[6] << " | " << board[7] << " | " << board[8] << endl << endl;
}

char winner(const vector<char>& board) {
	const int TOTAL_ROWS=8;

	const int WINNING_ROWS[TOTAL_ROWS][3]={
			{0, 1, 2},
			{3, 4, 5},
			{6, 7, 8},
			{0, 3, 6},
			{1, 4, 7},
			{2, 5, 8},
			{0, 4, 8},
			{2, 4 ,6}
		};

	for (int row=0; row<TOTAL_ROWS; row++) {
		if ( (board[WINNING_ROWS[row][0]] != EMPTY) &&
				(board[WINNING_ROWS[row][0]]==board[WINNING_ROWS[row][1]]) &&
				(board[WINNING_ROWS[row][1]]==board[WINNING_ROWS[row][2]]) ) {
			return board[WINNING_ROWS[row][0]];
		}
	}

	if (count(board.begin(), board.end(), EMPTY)==0) {
		return TIE;
	}

	return NO_ONE;
}

bool isLegal(const vector<char>& board, int move) {
	return (board[move]==EMPTY);
}

int humanMove(const vector<char>& board, char human) {
	int move=askNumber("Where will you move?", (board.size()-1), 0);

	while (!isLegal(board, move)) {
		move=askNumber("Invalid move, where will you move?", (board.size()-1), 0);
	}

	return move;
}

int computerMove(vector<char> board, char computer) {
	unsigned int move=0;
	bool found=false;

	while (!found && move<board.size()) {
		if (isLegal(board, move)) {
			board[move]=computer;
			found=winner(board)==computer;
			board[move]=EMPTY;
		}

		if (!found) {
			move++;
		}
	}

	if (!found) {
		move=0;
		char human=opponent(computer);

		while (!found && move<board.size()) {
			if (isLegal(board, move)) {
				board[move]=human;
				found=winner(board)==human;
				board[move]=EMPTY;
			}

			if (!found) {
				move++;
			}
		}
	}

	if (!found) {
		move=0;
		unsigned int i=0;

		const int BEST_MOVES[]={4, 0, 2, 6, 8, 1, 3, 5, 7};

		while (!found && i<board.size()) {
			move=BEST_MOVES[i];

			if (isLegal(board, move)) {
				found=true;
			}

			i++;
		}
	}

	return move;
}

void announceWinner(char winner, char computer, char human) {
	if (winner==computer) {
		cout << "Sorry, you lose!" << endl;
	} else if (winner==human) {
		cout << "Congratulations, you won!" << endl;
	} else {
		cout << "It's a tie." << endl;
	}
}
