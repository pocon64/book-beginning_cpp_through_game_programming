#include <iostream>
#include <string>

// Lost Fortune end of chapter project.

using std::cout;
using std::cin;
using std::endl;

using std::string;

int main() {
	const int GOLD_PIECES=900;
	int adventurers, killed, survivors;
	string leader;

	cout << "Welcome to LOST FORTUNE" << endl << endl;
	cout << "Please enter the following information for your game" << endl;

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter another number (smaller than the first): ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	cout << "A brave group of " << adventurers << " set out on a quest ";
	cout << "- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by the legendary rogue, " << leader << "." << endl << endl;

	cout << "Along the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving only " << survivors << " in the group." << endl << endl;

	cout << "The party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "They stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces." << endl << endl;

	if (GOLD_PIECES % survivors > 0) {
		cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
		cout << " pieces to keep things fair of course." << endl;
	}

	return 0;
}
