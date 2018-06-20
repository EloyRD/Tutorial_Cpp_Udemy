#include <iostream>

using namespace std;

int main() {

	cout << "Array of integers" << endl;
	cout << "=================" << endl;

	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl<<"Array of doubles" << endl;
	cout << "=================" << endl;

	double numbers[4] = { 4.8, 2.3, 5.6, 7.8 };
	for (int i = 0;i<4;i++) {
		cout << "Elements of index " << i << " : " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "=================" << endl;

	int numberArray[8] = {};
	for (int i = 0; i<8; i++) {
		cout << "Elements of index " << i << " : " << numberArray[i] << endl;
	}

	
	return 0;
}