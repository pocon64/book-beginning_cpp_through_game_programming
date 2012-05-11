#include <iostream>
#include <string>

// Game Developer Network Application

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string username;
	string password;
	bool success;

	cout << "    Game Developer's Network" << endl << endl;

	do {
		cout << "What is your username? ";
		cin >> username;

		cout << "What is your password? ";
		cin >> password;

		cout << endl;

		if (username=="Sid.Meier" && password=="civilisation") {
			cout << "Welcome Sid Meier!" << endl;
			success=true;
		} else if (username=="Shigeru.Miyamoto" && password=="mariobros") {
			cout << "Welcome Shigeru Miyamoto!" << endl;
			success=true;
		} else if (username=="Will.Wright" && password=="thesims") {
			cout << "Welcome Will Wright!" << endl;
			success=true;
		} else if (username=="guest" && password=="guest") {
			cout << "Welcome guest!" << endl;
			success=true;
		} else {
			cout << "Login FAILED" << endl;
		}
	} while (!success);

	return 0;
}
