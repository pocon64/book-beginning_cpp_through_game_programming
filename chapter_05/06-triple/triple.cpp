#include <iostream>
#include <string>

// Triple Application

using namespace std;

int triple(int number);
string triple(string text);

int main() {
	cout << "Tripling 5: " << triple(5) << endl << endl;
	cout << "Tripling 'gamer': " << triple("gamer") << endl << endl;

	return 0;
}

int triple(int number) {
	return (number*3);
}

string triple(string text) {
	return (text+text+text);
}
