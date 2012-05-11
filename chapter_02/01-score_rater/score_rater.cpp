#include <iostream>

// Score Rater Application

using std::cout;
using std::endl;

int main() {
	if (true) {
		cout << "This is always displayed." << endl << endl;
	}

	if (false) {
		cout << "This is never displayed." << endl << endl;
	}

	int score = 1000;

	if (score) {
		cout << "At least you didn't score zero!" << endl << endl;
	}

	if (score >= 250) {
		cout << "You scored 250 or more. Decent." << endl << endl;
	}

	if (score >= 500) {
		cout << "You scored 500 or more. Nice." << endl << endl;

		if (score >= 1000) {
			cout << "You scored 1000 or more. Impressive!" << endl << endl;
		}
	}

	return 0;
}
