#include <iostream>
#include <string>
#include <sstream>

#include "Person.h"

using namespace std;

int main() {
	Person person;
	person.setName("Georgina");
	
	cout << person.toString() << endl;
	cout << "Name of person with get method: " << person.getName() << endl;

	string name = "Bob";
	int age = 32;

	stringstream ss;
	
	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;
	
	return 0;
}