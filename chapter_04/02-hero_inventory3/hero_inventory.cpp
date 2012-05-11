#include <iostream>
#include <string>
#include <vector>

// Hero Inventory Application 3

using namespace std;

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armour");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items:" << endl;
	for (iter=inventory.begin(); iter!=inventory.end();++iter) {
		cout << *iter << endl;
	}

	cout << "You trade in your sword for an axe" << endl;
	myIterator=inventory.begin();
	*myIterator="battle axe";

	cout << "Your items are:" << endl;
	for (iter=inventory.begin(); iter!=inventory.end();++iter) {
		cout << *iter << endl;
	}

	cout << "The item name '" << *myIterator << "' has ";
	cout << (*myIterator).size() << " letters in it." << endl;

	cout << "The item name '" << *myIterator << "' has ";
	cout << myIterator->size() << " letters in it." << endl;

	cout << "You recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");

	cout << "Your items are:" << endl;
	for (iter=inventory.begin(); iter!=inventory.end();++iter) {
		cout << *iter << endl;
	}

	cout << "Your armour was destroyed in battle." << endl;
	inventory.erase((inventory.begin()+2));

	cout << "Your items are:" << endl;
	for (iter=inventory.begin(); iter!=inventory.end();++iter) {
		cout << *iter << endl;
	}

	return 0;
}
