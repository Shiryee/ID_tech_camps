#include "main.h"
using namespace std;

int main() {
	//variables
	int life = 3;
	//using operators and conditionals
	if (life > 0) {
		life--;
	}
	if (life > 0) {
		life--;
	}
	if (life > 0) {
		life--;
	}
	if (life > 0) {
		life--;
	}
	else if (life == 0) {
		cout << "You have zero life." << endl;
	}
	else {
		cout << "Game Over!" << endl;
	}
	//print
	cout << life << endl;
}