#include "switch_statements.h"
using namespace std;

int main() {
	int choice;
	cout << "Enter in your choice!" << endl;
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "That's a good choice!" << endl;
		break;
	case 2:
		cout << "UGHH." << endl;
		break;
	case 3:
		cout << "WHO DID THIS?" << endl;
		break;
	default:
		cout << "Choosing not to decide, you still have made a choice." << endl;
	}
}