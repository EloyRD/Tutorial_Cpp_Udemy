#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	float fValue = 76.4;

	cout << "Size of float: " << sizeof(float) << endl;
	cout << fValue << endl; 
	cout << fixed << fValue << endl;
	cout << scientific << fValue << endl <<endl;
	cout << setprecision(20) << fixed << fValue << endl <<endl;

	double dValue = 76.4;
	cout << setprecision(20) << fixed << dValue << endl;

	return 0;
}