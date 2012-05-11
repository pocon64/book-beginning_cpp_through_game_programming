#include <iostream>
#include <string>
#include <vector>

// Hero Inventory 2

using namespace std;

int main() {
	vector<string> inventory;

	inventory.push_back("sword");
	inventory.push_back("armour");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << " items in your inventory." << endl;

	cout << "Your items are:" << endl;
	for (unsigned int i=0; i<inventory.size(); i++) {
		cout << inventory[i] << endl;
	}

	cout << "You trade in your sword for an axe" << endl;
	inventory[0]="axe";

	cout << "Your items are:" << endl;
	for (unsigned int i=0; i<inventory.size(); i++) {
		cout << inventory[i] << endl;
	}

	cout << "The item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it." << endl;

	cout << "Your shield was destroyed in a fierce battle.";
	inventory.pop_back();

	cout << "Your items are:" << endl;
	for (unsigned int i=0; i<inventory.size(); i++) {
		cout << inventory[i] << endl;
	}

	cout << "You were cleared of all of your possessions bya thief." << endl;
	inventory.clear();

	if (inventory.empty()) {
		cout << "You have nothing." << endl;
	} else {
		cout << "You have at least one item." << endl;
	}

	cout << "Your items are:" << endl;
	for (unsigned int i=0; i<inventory.size(); i++) {
		cout << inventory[i] << endl;
	}

	return 0;
}
