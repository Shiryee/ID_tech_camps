#include <string>
#include <iostream>
using namespace std;

int main() {
	string index = "Example";
	int ind;
	string userName;
	cout << "What's your name?" << endl;
	getline(cin, userName);

	string story =
		"Once upon a time, there was a person\n"
		"named charName. The end.\n";

	ind = story.find("charName");
	cout << story << endl;
	cout << index[3] << endl; // this finds and prints the 4th letter

	while (ind != -1) {
		story.replace(ind, 9, userName); // replaces charName with userName
		ind = story.find("charName");
	}

	cout << story << endl;
}