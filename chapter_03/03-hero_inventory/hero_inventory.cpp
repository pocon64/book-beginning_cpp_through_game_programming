#include <iostream>
#include <string>

// Hero Inventory Application

using namespace std;

int main() {
	const unsigned int MAX_ITEMS=10;

	string inventory[MAX_ITEMS];

	unsigned int numItems=0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armour";
	inventory[numItems++] = "shield";

	cout << "Inventory:" << endl << endl;
	for (unsigned int i=0; i<numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << endl;
	cout << "You trade in your sword for an axe." << endl << endl;
	inventory[0]="axe";

	cout << "Inventory:" << endl << endl;
	for (unsigned int i=0; i<numItems; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "The item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it." << endl;

	cout << "You find a healing potion." << endl;

	if (numItems<MAX_ITEMS) {
		inventory[numItems++] = "healing potion";
	} else {
		cout << "You have too may items, and can't carry any more." << endl;
	}

	cout << endl;
	cout << "Inventory:" << endl << endl;
	for (unsigned int i=0; i<numItems; ++i) {
		cout << inventory[i] << endl;
	}

	return 0;
}
