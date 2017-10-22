//listExample
//vectors are similar to arrays, but size can be changed while program runs
#include "stdafx.h"


int main() {
	//this creates an array list of strings
	vector<string> list;

	//adds items to end of vector
	list.push_back ("Hey look, a string!");
	list.push_back("Oh no, a string!");
	list.push_back("Wow! A string!");

	cout << "The list" << endl;

	//prints out elements in the list
	for (string element : list) {
		cout << element << endl;
	}

	//prints specific element in the list
	//this prints the second element
	cout << list[1] << endl;

    return 0;
}

