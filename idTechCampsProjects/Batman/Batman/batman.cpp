#include "batman.h"
using namespace std;

int main() {
	int pointsUser = 0;
	int pointsBatman = 0;
	int userInput;
	char userYN;
	//intro
	cout << "Who would win in a fight, you or the Batman?" << endl;
	cout << "Answer the following questions, and this progam will show who prevails!" << endl;
	//question 1
	cout << "On a scale of 1-10, how strong are you?" << endl;
	cin >> userInput;
	//points for round 1
	if (userInput > 7) {
		pointsUser++;
	}
	else {
		pointsBatman++;
	}
	//question 2
	cout << "On a scale of 1-10, how tactical of a planner are you?" << endl;
	cin >> userInput;
	//points for round 2
	if (userInput <= 8) {
		pointsBatman++;
	}
	else {
		pointsUser++;
	}
	//question 3
	cout << "(Y)es or (N)o, would you be afraid of a giant bat flying straight towards you?" << endl;
	cin >> userYN;
	//points for round 3
	if (userYN != 'N') {
		pointsBatman++;
	}
	else {
		pointsUser++;
	}
	//FINAL ANSWER
	if (pointsBatman >= pointsUser) {
		cout << "Batman would win, YOU FALIURE!" << endl;
	}
	else {
		cout << "You would 'win', YOU LIAR!" << endl;
	}

}