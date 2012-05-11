#include <iostream>
#include <string>

// String Tester Application

using std::cout;
using std::endl;
using std::string;

int main() {
	string word1="Game";
	string word2=("Over");
	string word3="!!!";

	string phrase=word1 + " " + word2 + word3;

	cout << "The phrase is: " << phrase << endl << endl;
	cout << "The phrase has " << phrase.size() << " characters in it." << endl << endl;
	cout << "The character at position 0 is '" << phrase[0] << "'." << endl << endl;

	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << endl << endl;

	for (unsigned int i=0; i<phrase.size(); ++i) {
		cout << phrase[i] << endl;
	}

	cout << "The word 'Over' begins at position " << phrase.find("Over") << endl;

	if (phrase.find("eggplant") == string::npos) {
		cout << "The phrase 'eggplant' was not found in the phrase" << endl;
	}

	phrase.erase(4,5);
	cout << "The phrase is now: " << phrase << endl << endl;

	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl << endl;

	phrase.erase();
	cout << "The phrase is now: " << phrase << endl << endl;

	if (phrase.empty()) {
		cout << "The phrase is now empty" << endl << endl;
	}

	return 0;
}
