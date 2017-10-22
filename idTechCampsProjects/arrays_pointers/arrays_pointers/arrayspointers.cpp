// arrayspointers.cpp : Defines the entry point for the console application.

#include "stdafx.h"


int main() {
		string words[4];
		words[0] = "Hello!";
		*(words + 1) = " how ";
		*(words + 2) = " are ";

		cout << sizeof(string) << endl;
		cout << words << endl;

		for (int i = 0; i < sizeof(words[0]) * 4; i += sizeof(words[0])) {
			cout << "the address is " << &words[i] << endl;
		}

    return 0;
}

