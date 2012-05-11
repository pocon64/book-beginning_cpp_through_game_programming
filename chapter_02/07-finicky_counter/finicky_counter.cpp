#include <iostream>

// Finicky Counter Application

using std::cout;
using std::endl;

int main() {
	int count=0;

	while (true) {
		count += 1;

		if (count>10) {
			break;
		}

		if (count==5) {
			continue;
		}

		cout << count << endl;
	}

	return 0;
}
