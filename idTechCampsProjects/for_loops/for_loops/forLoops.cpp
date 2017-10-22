#include "forLoops.h"
using namespace std;

int main() {
	int numberOfLeaves = 14;
	
	for (int i = 0; i < numberOfLeaves; i++) {
		cout << "A leaf fell to the ground. "
			 << i + 1 << " leaves have fallen." << endl;
	}
	cout << "All the leaves fell." << endl;
}