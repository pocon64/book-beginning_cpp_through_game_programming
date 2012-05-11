#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// Word Jumble Application

using namespace std;

int main() {
	enum fields {WORD, HINT, NUM_FIELDS};

	const int NUM_WORDS=5;

	const string WORDS[NUM_WORDS][NUM_FIELDS] = {
			{"wall", "Do you feel you're banging your head against something?"},
			{"glasses", "These might help you see the answer"},
			{"laboured", "Going slowly, is it?"},
			{"persistent", "Keep at it"},
			{"jumble", "It's what this game is all about"},
		};

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);

	string theWord=WORDS[choice][WORD];
	string theHint=WORDS[choice][HINT];

	string jumble=theWord;
	int length=jumble.size();

	for (int i=0; i<length; i++) {
		int index1=(rand()%length);
		int index2=(rand()%length);
		char temp=jumble[index1];
		jumble[index1]=jumble[index2];
		jumble[index2]=temp;
	}

	cout << "Welcome to WORD JUMBLE" << endl << endl;
	cout << "Unscramble the letters to reveal a word" << endl;
	cout << "Enter 'hint' to get a hint" << endl;
	cout << "Enter 'quit' to quit" << endl;
	cout << "The jumble is:" << endl << endl;
	cout << jumble << endl << endl;
	string guess;
	cout << "Your guess? ";
	cin >> guess;

	while ((guess!=theWord) && (guess!="quit")) {
		if (guess=="hint") {
			cout << theHint << endl;
		} else {
			cout << "Sorry, that's not the word.";
		}

		cout << "Your guess: ";
		cin >> guess;
	}

	if (guess==theWord) {
		cout << "Well done, you guessed it!" << endl;
	}

	cout << "Thanks for playing!" << endl << endl;

	return 0;
}
