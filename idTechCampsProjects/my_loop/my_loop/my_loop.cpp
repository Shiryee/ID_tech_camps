#include "my_loop.h"
using namespace std;

int main() {
	bool onRollerCoaster = true;
	int timesToRepeat = 5;

	while (onRollerCoaster) {
		cout << "AHHHH!" << endl;
		onRollerCoaster = false;
	}

	for (int i = 0; i < timesToRepeat; i++) {
		cout << i << endl;
	}

}