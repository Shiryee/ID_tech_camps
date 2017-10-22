#include "objects.h"

	player::player() {
		name = "Default";
	}

	player::player(string theName) {
		name = theName;
	}

	void player::Greet() {
		cout << "hey there " << name << "!" << endl;
	}
