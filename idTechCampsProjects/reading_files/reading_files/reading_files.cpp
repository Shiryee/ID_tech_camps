#include "reading_files.h"
using namespace std;

int main() {
	fstream fileStream;
	fileStream.open("test.txt", ios::out);

	if (fileStream.is_open()) {
		cout << "File opened successfully!" << endl;
		fileStream << "Saving this to the file." << endl;
	}
	fileStream.close();

	fstream readStream;
	readStream.open("test.txt", ios::in);

	string readWord;
	string readLine;

	if (readStream.is_open()) {
		readStream >> readWord;
		cout << readWord << endl;
		getline(readStream, readLine);
		cout << readLine << endl;
	}
	
	readStream.close();
}