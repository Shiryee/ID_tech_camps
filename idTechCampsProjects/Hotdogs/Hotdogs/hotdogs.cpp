#include <iostream>
#include <string>
using namespace std;

int main() {
	int hotDogsADay[7] = { 107, 57, 78, 98, 47, 212, 0 };

	for (int i = 0; i < 7; i++) {
		cout << "Enter the amount of hot dogs you ate." << endl;
		cin >> hotDogsADay[i];
	}

	double hotDogAverage = 0;

	for (int i = 0; i < 7; i++) {
		hotDogAverage += hotDogsADay[i];
	}
	cout << "You ate " << hotDogAverage << " hot dogs this week." << endl;
	hotDogAverage = hotDogAverage / 7;
	cout << "On average you eat " << hotDogAverage << " hot dogs a day." << endl;
}