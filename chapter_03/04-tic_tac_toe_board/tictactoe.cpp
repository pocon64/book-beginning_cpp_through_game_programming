#include <iostream>

// Tic tac Toe Board Application

using namespace std;

int main() {
	const unsigned int ROWS=3;
	const unsigned int COLUMNS=3;

	char board[ROWS][COLUMNS] = {
			{ 'O', 'X', 'O' },
			{ ' ', 'X', 'X' },
			{ 'X', 'O', 'O' },
		};

	cout << "Here's the tic-tac-toe board:" << endl << endl;

	for (unsigned int i=0; i<ROWS; i++) {
		for (unsigned int j=0; j<COLUMNS; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}

	cout << "X moves to the empty location." << endl << endl;

	board[1][0]='X';

	cout << "Here's the tic-tac-toe board:" << endl << endl;

	for (unsigned int i=0; i<ROWS; i++) {
		for (unsigned int j=0; j<COLUMNS; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}

	cout << "X wins!" << endl;

	return 0;
}
