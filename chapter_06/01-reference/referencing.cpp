#include <iostream>

// Referencing Application

using namespace std;

int main() {
	int myScore=1000;
	int &mikesScore=myScore;

	cout << "My score is " << myScore << endl;
	cout << "Mike's score is " << mikesScore << endl;

	cout << "Adding 500 to my score" << endl;
	myScore+=500;
	cout << "My score is " << myScore << endl;
	cout << "Mike's score is " << mikesScore << endl;

	cout << "Adding 500 to Mike's score" << endl;
	mikesScore+=500;
	cout << "My score is " << myScore << endl;
	cout << "Mike's score is " << mikesScore << endl;

	return 0;
}

