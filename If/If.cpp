#include <iostream>
#include <string>

using namespace std;

int main() {

	string password = "Hello";

	cout << "Enter your password > " << flush;
	
	string input;
	cin >> input;

	if(input == password) {
		cout << "Password accepted." << endl;
	}

	if (input != password) {
		cout << "Access denied." << endl;
	}

	return 0;
}