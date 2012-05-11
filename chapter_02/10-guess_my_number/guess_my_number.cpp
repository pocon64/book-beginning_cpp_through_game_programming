#include <iostream>
#include <cstdlib>
#include <ctime>

// Guess My Number Project

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int secretNumber = rand() % 100 + 1;

	int tries = 0;
	int guess;

	cout << "Welcome to Guess My Number!" << endl << endl;

	do {
		cout << "What is your guess? ";
		cin >> guess;
		tries++;

		if (guess>secretNumber) {
			cout << "Lower" << endl;
		} else if (guess<secretNumber) {
			cout << "Higher" << endl << endl;
		}
	} while (guess!=secretNumber);

	cout << "Well done, you guessed correctly, the number was " << secretNumber << ", which you guessed in " << tries << " tries"<< endl;

	return 0;
}
