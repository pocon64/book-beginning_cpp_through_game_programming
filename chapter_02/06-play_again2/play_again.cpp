#include <iostream>

// Play Again Application 2

using std::cout;
using std::cin;
using std::endl;

int main() {
	char again = 'y';

	do {
		cout << "** Played an exciting game **" << endl;
		cout << "play again? ";
		cin >> again;
	} while (again=='y');

	cout << "OK, Thanks for playing." << endl;

	return 0;
}
