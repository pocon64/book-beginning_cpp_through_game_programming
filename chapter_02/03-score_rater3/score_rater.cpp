#include <iostream>

// Score Rater Application 3

using std::cout;
using std::cin;
using std::endl;

int main() {
	int score;
	cout << "Please enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!" << endl;
	} else if (score >=500) {
		cout << "You scored 500 or more. Nice!" << endl;
	} else if (score >=250) {
		cout << "You scored 250 or more. Decent." << endl;
	} else {
		cout << "You scored less than 250. Nothing to brag about." << endl;
	}

	return 0;
}
