#include <iostream>

// Game Stats Application 3

using std::cout;
using std::endl;

int main() {
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "Score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};

	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST=25, BOMBER_COST, CRUISER_COST=50};
	shipCost myShipCost = BOMBER_COST;
	cout << "To upgrade my ship to a Cruiser will cost: " << (CRUISER_COST - myShipCost) << " points." << endl;

	return 0;
}
