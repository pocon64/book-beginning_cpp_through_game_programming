#include <iostream>
#include <string>
#include <vector>

// Inventory Referencer Application

using namespace std;

string& refToElement(vector<string>& inventory, int i);

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armour");
	inventory.push_back("shield");

	cout << "Sending returned reference to cout: ";
	cout << refToElement(inventory, 0) << endl;

	cout << "Assigning the returned reference to another reference." << endl;
	string& rStr=refToElement(inventory, 1);
	cout << "Sending the new reference to cout: ";
	cout << rStr << endl;

	cout << "Assigning the returned reference to a string object." << endl;
	string str=refToElement(inventory, 2);
	cout << "Sending the new string object to cout: ";
	cout << str << endl;

	cout << "Altering an object through a returned reference." << endl;
	rStr="healing potion";
	cout << "Sending the new altered object to cout: ";
	cout << inventory[1] << endl;

	return 0;
}

string& refToElement(vector<string>& inventory, int i) {
	return inventory[i];
}
