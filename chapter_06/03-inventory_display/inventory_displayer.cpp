#include <iostream>
#include <vector>
#include <string>

// Inventory Displayer Application

using namespace std;

void display(const vector<string>& inventory);

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armour");
	inventory.push_back("shield");

	display(inventory);

	return 0;
}

void display(const vector<string>& inventory) {
	cout << "Your items are: " << endl << endl;
	for (vector<string>::const_iterator iter=inventory.begin(); iter!=inventory.end(); ++iter) {
		cout <<  *iter << endl;
	}
}
