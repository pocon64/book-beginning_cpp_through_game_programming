#include <iostream>

// Taking Damage Application

using namespace std;

int radiation(int health);

int main() {
	int health=80;
	cout << "Your health is " << health << endl << endl;

	health=radiation(health);
	cout << "After radiation exposure your health is " << health << endl << endl;

	health=radiation(health);
	cout << "After radiation exposure your health is " << health << endl << endl;

	health=radiation(health);
	cout << "After radiation exposure your health is " << health << endl << endl;

	return 0;
}

int radiation(int health) {
	return (health/2);
}
