#include <iostream>

// Menu ChooserApplication

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "Difficulty Levels" << endl << endl;
	cout << "1. Easy" << endl;
	cout << "2. Medium" << endl;
	cout << "3. Hard" << endl;

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Easy difficulty selected.";
		break;
	case 2:
		cout << "Medium difficulty selected.";
		break;
	case 3:
		cout << "Hard difficulty selected.";
		break;
	default:
		cout << "Illegal choice.";
		break;
	}

	cout << endl;

	return 0;
}
