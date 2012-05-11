#include <iostream>
#include <string>

// Yes or No Application

using namespace std;

char askYesNo1();
char askYesNo2(string question);

int main() {
	char answer1=askYesNo1();
	cout << "Thanks for answering: " << answer1 << endl << endl;

	char answer2=askYesNo2("Do you want to save your game?");
	cout << "Thanks for answering: " << answer2 << endl << endl;

	return 0;
}

char askYesNo1() {
	char response1;

	do {
		cout << "Please enter 'y' or 'n': ";
		cin >> response1;
	} while (response1!='y' && response1!='n');

	return response1;
}

char askYesNo2(string question) {
	char response2;

	do {
		cout << question;
		cin >> response2;
	} while (response2!='y' && response2!='n');

	return response2;
}
