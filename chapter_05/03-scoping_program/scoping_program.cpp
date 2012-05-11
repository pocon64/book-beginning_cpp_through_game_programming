#include <iostream>

// Scoping Program

using namespace std;

void func();

int main() {
	int var=5;
	cout << "In main() var is: " << var << endl << endl;

	func();

	cout << "Back in main() var is: " << var << endl << endl;

	{
		cout << "In main() (block scope) var is: " << var << endl << endl;
		cout << "A new var is created in the main() block." << endl;

		int var=10;
		cout << "In main() (block scope) var is: " << var << endl << endl;
	}

	cout << "The block is closed, and the scope no longer exists." << endl;
	cout << "In main() var is: " << var << endl << endl;

	return 0;
}

void func() {
	int var=-5;
	cout << "In func() var is: " << var << endl << endl;
}
