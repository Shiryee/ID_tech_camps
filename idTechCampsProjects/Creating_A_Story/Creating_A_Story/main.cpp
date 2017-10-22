#include "main.h"
using namespace std;

int main() {
	//my words
	string adjective = "happy";
	string animal = "dragon";
	string location = "sea";
	string foodTrees = "trees";
	string foodBushes = "bushes";
	string humanName = "Geoff";
	string humanRole = "butcher";
	string action = "fight";
	string location2 = "city";
	//user input
	cout << "Give me an adjective." << endl;
	getline(cin, adjective);
	cout << "Give me an animal." << endl;
	getline(cin, animal);
	cout << "Give me a location." << endl;
	getline(cin, location);
	cout << "Give me another location." << endl;
	getline(cin, location2);
	cout << "Give me a food." << endl;
	getline(cin, foodTrees);
	cout << "Give me another food." << endl;
	getline(cin, foodBushes);
	cout << "What is your name?" << endl;
	getline(cin, humanName);
	cout << "Give me a job." << endl;
	getline(cin, humanRole);
	cout << "Give me a verb." << endl;
	getline(cin, action);
	//story
	cout << "Once upon a time, there was a " << adjective << " " << animal << "." << endl;
	cout << "The " << animal << " lived by the " << location << "." << endl;
	cout << "He ate " << foodTrees << " and " << foodBushes << "." << endl;
	cout << "People thought the " << animal << " was too " << adjective << "." << endl;
	cout << "The people sent " << humanName << ", the village's " << humanRole << ", to " << action << " the " << animal << "." << endl;
	cout << "The " << animal << " thought that sounded unpleasant, so he left the " << location << "." << endl;
	cout << "Now he lives in the " << location2 << " and eats "<< foodTrees << " and " << foodBushes << " there instead." << endl;
	
}