#include <iostream>

// Global Reach Application

using namespace std;

int glob=10;

void access_global();
void hide_global();
void change_global();

int main() {
	cout << "In main() glob is: " << glob << endl << endl;
	access_global();

	hide_global();
	cout << "In main() glob is: " << glob << endl << endl;

	change_global();
	cout << "In main() glob is: " << glob << endl << endl;

	return 0;
}

void access_global() {
	cout << "In access_global() glob is: " << glob << endl << endl;
}

void hide_global() {
	int glob=0;
	cout << "In hide_global() glob is: " << glob << endl << endl;
}

void change_global() {
	int glob=-10;
	cout << "In change_global() glob is: " << glob << endl << endl;
}
