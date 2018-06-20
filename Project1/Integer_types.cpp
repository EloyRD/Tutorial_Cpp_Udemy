#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {

	int value = 54672;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl << endl;

	long int lValue = 321284393274;
	cout << lValue << endl;
	cout << "Max long value: " << LONG_MAX << endl;
	cout << "Min long value: " << LONG_MIN << endl << endl;

	short int sValue = 6457;
	cout << sValue << endl;
	cout << "Max short value: " << SHRT_MAX << endl;
	cout << "Min short value: " << SHRT_MIN << endl << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;

	return 0;
}