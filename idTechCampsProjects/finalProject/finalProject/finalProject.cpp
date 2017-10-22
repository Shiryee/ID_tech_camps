#include "finalProject.h"

random_device rd;


int main() {

	int playerCharacter;

	cout << "Choose your character to start. Use keys 1, 2 or 3 to select." << endl;
	cout << "1) Superman" << endl;
	cout << "2) Batman" << endl;
	cout << "3) Green Lantern" << endl;

	cin >> playerCharacter;

	switch (playerCharacter) {
	case 1:
		cout << "You have selected Superman as your character. You have all the powers. Let's begin." << endl;
		break;
	case 2:
		cout << "You have selected Batman as your character. You have your utility belt. Let's begin." << endl;
		break;
	case 3:
		cout << "You have selected Green Lantern as your character. You can use your webs to attack. Let's begin." << endl;
		break;
	default:
		cout << "You have not chosen a character. You will play as Green Lantern. Let's begin." << endl;
		break;
	}

	int playerChoice;
	int compHealthPoints = 30;
	int playerHealthPoints = 30;
	//bool startGame = true;

	while (playerHealthPoints > 0 && compHealthPoints > 0) {


		int damage;

		//health point options
		int attackDamage = (rd() % 8) + 1;

		if (playerCharacter == 1) { //Superman
			cout << "It's your turn, choose an attack:" << endl;
			cout << "1) Use lasers and attack" << endl;
			cout << "2) Use super-strength" << endl;
			cout << "3) Fly" << endl;
			cin >> playerChoice;

			switch (playerChoice) {
			case 1:
				cout << "You use lasers, shooting them at a nearby tree. The tree falls onto your opponent." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			case 2:
				cout << "You use your super-strength, and throw a car at you enemy. The enemy has been stunned." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			case 3:
				cout << "You fly around, confusing your opponent, and attack from behind." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;

			}

		}

		else if (playerCharacter == 2) { //Batman
			cout << "It's your turn, choose an attack:" << endl;
			cout << "1) Use your Batarangs" << endl;
			cout << "2) Use your grappling hook" << endl;
			cout << "3) Use a smoke bomb" << endl;
			cin >> playerChoice;

			switch (playerChoice) {
			case 1:
				cout << "You use your batarangs, and knock your opponent down." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			case 2:
				cout << "You use your grappling hook, which pulls your enemy towards you so you can attck." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			case 3:
				cout << "You throw a smoke bomb and sneek up behind your enemy, knocking him out." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			}
		}

		else { //Green Lantern
			cout << "It's your turn, choose an attack:" << endl;
			cout << "1) Use your will power to become Batman" << endl;
			cout << "2) Use your will power to make a beter superhero suit" << endl;
			cout << "3) Use your will power to imagine a bomb" << endl;
			cin >> playerChoice;

			switch (playerChoice) {
			case 1:
				cout << "You are now batman. Your enemy is so scared, he runs away" << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			case 2:
				cout << "You now have a better suit. Your enemy thinks that its cool, and wants to be your friend." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;
			case 3:
				cout << "You blow up everything, including your opponent." << endl;
				damage = attackDamage;
				compHealthPoints -= damage;
				cout << "The enemy has lost " << damage << " health points. Enemy health: " << compHealthPoints << endl;
				break;

			}
		}

		int enemyChoice = rd() % 5;
		int damage2;
		int attackDamage2 = rd() % 7 + 1;

		switch (enemyChoice) {
		case 0:
			cout << "Your enemy is an spy, and you give him your secret identity." << endl;
			damage2 = attackDamage2;
			playerHealthPoints -= damage2;
			cout << "You have lost " << damage2 << " health points. Your health: " << playerHealthPoints << endl;
			break;
		case 1:
			cout << "Your enemy is the joker, and you walk right into his trap." << endl;
			damage2 = attackDamage2;
			playerHealthPoints -= damage2;
			cout << "You have lost " << damage2 << " health points. Your health: " << playerHealthPoints << endl;
			break;
		case 2:
			cout << "Your enemy is the riddler, and you can't figure out his riddle." << endl;
			damage2 = attackDamage2;
			playerHealthPoints -= damage2;
			cout << "You have lost " << damage2 << " health points. Your health: " << playerHealthPoints << endl;
			break;
		case 3:
			cout << "Your opponent is Ironman, and he tests his new techonology on you." << endl;
			damage2 = attackDamage2;
			playerHealthPoints -= damage2;
			cout << "You have lost " << damage2 << " health points. Your health: " << playerHealthPoints << endl;
			break;
		case 4:
			cout << "Your opponent is from Marvel." << endl;
			damage2 = 7;
			playerHealthPoints -= damage2;
			cout << "You have lost " << damage2 << " health points. Your health: " << playerHealthPoints << endl;
			break;
		}

	}

	if (playerHealthPoints > compHealthPoints) {
		cout << "You won!!! :)" << endl;
	}

	else if (compHealthPoints > playerHealthPoints) {
		cout << "You lost. :(" << endl;
	}

	else {
		cout << "You have tied with your opponent." << endl;
	}

	cout << "Your final health: " << playerHealthPoints << endl;
	cout << "Your enemy's final health: " << compHealthPoints << endl;
}



