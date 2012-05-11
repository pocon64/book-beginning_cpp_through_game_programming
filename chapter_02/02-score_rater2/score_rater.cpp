#include <iostream>

// Score Rater Application 2

using std::cout;
using std::cin;
using std::endl;

int main() {
	int score;
	cout << "Please enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!" << endl;
	} else {
		cout << "You scored less than 1000." << endl;
	}

	return 0;
}
