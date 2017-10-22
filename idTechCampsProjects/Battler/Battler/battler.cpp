#include <iostream>
#include <random>
using namespace std;

random_device rd;

int main() {

	char charaterChoice;

	cout << "Choose your character:" << endl;
	cout << "a) Vin Venture" << endl;
	cout << "b) Elend Venture" << endl;
	cout << "c) Kelsier" << endl;
	cout << "d) Spook Lestibornes" << endl;
	cin >> charaterChoice;

	switch (charaterChoice) {
	case 'a':
		cout << "You have selected Vin Venture. Let's begin" << endl;
		break;
	case 'b':
		cout << "You have selected Elend Venture. Let's begin" << endl;
		break;
	case 'c':
		cout << "You have selected Kelsier. Let's begin" << endl;
		break;
	case 'd':
		cout << "You have selected Spook Lestibornes. Let's begin" << endl;
		break;
	default:
		cout << "You have not selected a valid choice, so your character is yourself, and you are lame." << endl;
		break;
	}

	while (true) {
		int playerChoice;

		cout << "Choose an attack 1 - 3:" << endl;
		cout << "1) Sword Smash" << endl;
		cout << "2) Mistborn" << endl;
		cout << "3)Tineye" << endl;

		cin >> playerChoice;

		switch (playerChoice) {
		case 1:
			cout << "You swing away with your sword! LAME! Insane Zane beats you up. It's just that plain. enemy -0 HP" << endl;
			break;
		case 2:
			cout << "You are a beast like Vin and Elend and Kelsier, so you beat the shit out of your opponent. enemy -7 HP." << endl;
			break;
		case 3: cout << "You are cool like Spook and can dodge attacks before they come, because of your senses. enemy - 3 HP." << endl;
			break;
		default:
			cout << "You trip and die. What a loser." << endl;
			break;
		}

		int enemyChoice = rd() % 3;

		switch (enemyChoice) {
		case 0: cout << "Your enemy is an Inquisitor, and you are not at all like Rean. You give him all your secrets immediately. -6 HP" << endl;
			break;
		case 1: cout << "Your enemy is an Obligator and he is still pro, you are not mistborn and sooo... -3 HP." << endl;
			break;
		case 2: cout << "Your enemy is mistborn like insane Zane, but you are also mistborn just like insane Zane, so you -1 HP. It's just that plain." << endl;
		}
	}
}