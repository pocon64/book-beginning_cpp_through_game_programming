#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// Hangman Application

using namespace std;

int main() {
	//setup

	const int MAX_WRONG=8;

	vector<string> words;
	words.push_back("GUESS");
	words.push_back("DIFFICULT");
	words.push_back("HANGMAN");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());

	const string THE_WORD=words[0];
	int wrong=0;
	string soFar(THE_WORD.size(), '-');
	string used="";

	cout << "Welcome to Hangman" << endl << endl;

	while ((wrong<MAX_WRONG) && (soFar!=THE_WORD)) {
		cout << "You have " << (MAX_WRONG-wrong);
		cout << " guesses left." << endl;
		cout << "You have used the letters: " << used << endl;
		cout << "So far, the word is: " << soFar << endl;

		char guess;
		cout << "Please enter your guess: ";
		cin >> guess;

		guess=toupper(guess);

		while (used.find(guess)!=string::npos) {
			cout << "You've already guessed " << guess << endl;
			cout << "Please enter your guess: ";
			cin >> guess;
			guess=toupper(guess);
		}

		used+=guess;
		if (THE_WORD.find(guess)!=string::npos) {
			cout << "That's right! " << guess << " is in the word." << endl;

			for (unsigned int i=0; i<THE_WORD.length(); ++i) {
				if (THE_WORD[i]==guess) {
					soFar[i]=guess;
				}
			}
		} else {
			cout << "Sorry, " << guess << " isn't in the word." << endl;
			++wrong;
		}
	}

	if (wrong==MAX_WRONG) {
		cout << "You've been hanged!" << endl;
	} else {
		cout << "You've guessed it!" << endl;
	}

	cout << "The word was " << THE_WORD << endl;

	return 0;
}
