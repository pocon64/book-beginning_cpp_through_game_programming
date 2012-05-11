#include <iostream>

// Swap Application

using namespace std;

void badSwap(int x, int y);
void goodSwap(int &x, int &y);

int main() {
	int myScore=150;
	int yourScore=1000;
	cout << "Original values: myScore=" << myScore << ", yourScore=" << yourScore << endl;
	cout << "Calling badSwap()" << endl;
	badSwap(myScore, yourScore);
	cout << "New values: myScore=" << myScore << ", yourScore=" << yourScore << endl;
	cout << "Calling goodSwap()" << endl;
	goodSwap(myScore, yourScore);
	cout << "New values: myScore=" << myScore << ", yourScore=" << yourScore << endl;

	return 0;
}

void badSwap(int x, int y) {
	int temp=x;
	x=y;
	y=temp;
}

void goodSwap(int &x, int &y) {
	int temp=x;
	x=y;
	y=temp;
}
