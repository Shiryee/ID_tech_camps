#include "Creating_A_Story_index.h"

// this code doesn't quite work

int main() {

	int h;
	int d;
	int s;
	int t;
	int b;
	int G;
	int bu;
	int f;
	int c;

	string adjective;
	string animal;
	string location;
	string foodTrees;
	string foodBushes;
	string humanName;
	string humanRole;
	string action;
	string location2;

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


	string story =
		"Once upon a time, there was a happy dragon.\n"
		"The dragon lived by the sea.\n"
		"He ate trees and bushes.\n"
		"People thought the dragon was too loud.\n"
		"The people sent Geoff, the village's butcher, to fight the dragon.\n"
		"The dragon thought that sounded unpleasant, so he left the sea.\n"
		"Now he lives in the city and eats the trees and bushes there instead.\n";

	//replacing words using index

	h = story.find("happy");
	d = story.find("dragon");
	s = story.find("sea");
	t = story.find("trees");
	b = story.find("bushes");
	G = story.find("Geoff");
	bu = story.find("butcher");
	f = story.find("fight");
	c = story.find("city");

	cout << story << endl;

	while (h != -1) {
		story.replace(h, 5, adjective);
		h = story.find("happy");
	}

	while (d != -1) {
		story.replace(d, 6, animal);
		d = story.find("dragon");
	}

	while (s != -1) {
		story.replace(s, 3, location);
		s = story.find("sea");
	}

	while (t != -1) {
		story.replace(t, 5, foodTrees);
		t = story.find("trees");
	}

	while (b != -1) {
		story.replace(b, 6, foodBushes);
		b = story.find("bushes");
	}

	while (G != -1) {
		story.replace(G, 5, humanName);
		G = story.find("Geoff");
	}

	while (bu != -1) {
		story.replace(bu, 7, humanRole);
		bu = story.find("butcher");
	}

	while (f != -1) {
		story.replace(f, 5, action);
		f = story.find("fight");
	}

	while (c != -1) {
		story.replace(c, 4, location2);
		c = story.find("city");
	}

	//story
	cout << story << endl;

}