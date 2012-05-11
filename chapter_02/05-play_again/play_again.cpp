#include <iostream>

// Play Again Application

using std::cout;
using std::cin;
using std::endl;

int main() {
	char again = 'y';

	while (again=='y') {
		cout << "** Played an exciting game **" << endl;
		cout << "Play again? ";
		cin >> again;
	}

	cout << "OK, thanks for playing." << endl;

	return 0;
}
