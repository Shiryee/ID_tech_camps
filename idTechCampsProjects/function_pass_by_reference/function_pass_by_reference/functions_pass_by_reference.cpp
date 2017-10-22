#include <string>
#include <iostream>
using namespace std;

void getInput(string & input);

int main() {
	string input = "Starting Value";
	cout << input << endl;
	getInput(input);
	cout << input << endl;
}

void getInput(string & input) {
	cout << "Type a sentence" << endl;
	getline(cin, input);
	cout << input << endl;
}