#include "Person.h"
#include <sstream>

Person::Person() : name("undefined"), age(0) {
}

Person::Person(string name, int age) : name(name), age(age) {
}

Person::~Person() {
}

string Person::toString() {
	stringstream ss;

	ss << "Name : ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
