#include <iostream>
#include <string>

// Mad-Lib Application

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main() {
	cout << "Welcome to Mad-Lib" << endl << endl;
	string name=askText("Please enter a name: ");
	string noun=askText("Please enter a plural noun: ");
	int number=askNumber("Please enter a number: ");
	string bodyPart=askText("Please enter a body part: ");
	string verb=askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	return 0;
}

string askText(string prompt) {
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt) {
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb) {
	cout << "Here's your story:" << endl << endl;
	cout << "The famous explorer " << name;
	cout << " had nearly given up a life long quest to find";
	cout << " the Lost City of " << noun;
	cout << " when one day, the " << noun;
	cout << " found the explorer." << endl;
	cout << "Surrounded by " << number << " " << noun;
	cout << ", a tear came to " << name << "'s " << bodyPart << "." << endl;
	cout << "After all this time, the quest was finally over. ";
	cout << "And then the " << noun << " promptly devoured " << name << "." << endl;
	cout << "The moral of the story? Be careful what you " << verb << " for!" << endl;
}
