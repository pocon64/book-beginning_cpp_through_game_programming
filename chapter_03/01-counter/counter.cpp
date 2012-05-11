#include <iostream>

// Counter Application

using namespace std;

int main() {
	cout << "Counting forward: " << endl;
	for (int i=0; i<10; ++i) {
		cout << i << " ";
	}

	cout << endl;

	cout << "Counting backward: " << endl;
	for (int i=10; i>0; --i) {
		cout << i << " ";
	}

	cout << endl;

	cout << "Counting by fives: " << endl;
	for (int i=0; i<50; i+=5) {
		cout << i << " ";
	}

	cout << endl;

	cout << "Counting with null statements: " << endl;
	int count=0;
	for (; count<10; ) {
		cout << count << " ";
		++count;
	}

	cout << endl;

	cout << "Counting with nested for loops: " << endl;
	const int ROWS=5;
	const int COLUMNS=3;
	for (int i=0; i<ROWS; ++i) {
		for (int j=0; j<COLUMNS; ++j) {
			cout << i << ", " << j << "   ";
		}

		cout << endl;
	}

	cout << endl;

	return 0;
}
