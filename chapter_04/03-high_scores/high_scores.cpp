#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

// High Scores Application

using namespace std;

int main() {
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores." << endl;
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "High Scores" << endl;
	for (iter=scores.begin();iter!=scores.end(); iter++) {
		cout << *iter << endl;
	}

	cout << "Finding a score." << endl;
	int score;
	cout << "Enter a score to find: ";
	cin >> score;
	iter=find(scores.begin(), scores.end(), score);

	if (iter!=scores.end()) {
		cout << "Score found." << endl;
	} else {
		cout << "Score not found." << endl;
	}

	cout << "Randomising scores." << endl;
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());

	cout << "High Scores" << endl;
	for (iter=scores.begin();iter!=scores.end(); iter++) {
		cout << *iter << endl;
	}

	cout << "Sorting scores." << endl;
	sort(scores.begin(), scores.end());

	cout << "High Scores" << endl;
	for (iter=scores.begin();iter!=scores.end(); iter++) {
		cout << *iter << endl;
	}

	return 0;
}

