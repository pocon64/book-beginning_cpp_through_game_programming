#include <iostream>

// Game Stats Application

using std::cout;
using std::cin;
using std::endl;

int main() {
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "Score:         " << score << endl;
	cout << "Distance:      " << distance << endl;
	cout << "Play Again:    " << playAgain << endl;
	cout << "Lives:         " << lives << endl;
	cout << "Aliens Killed: " << aliensKilled << endl;
	cout << "Engine Temp:   " << engineTemp << endl;
	cout << endl;

	int fuel;
	cout << "How much fuel?: ";
	cin >> fuel;
	cout << "Fuel:          " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;

	cout << "Bonus:         " << bonus << endl;

	return 0;
}
