#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
	Person person1;
	Person person2("Susi", 25);
	Person person3("Bob", 42);


	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}