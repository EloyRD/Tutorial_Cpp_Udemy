#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if (happy) {
		cout << "Meowwww!!!" << endl;
	}
	else {
		cout << "Sssssss!!!" << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}


Cat::Cat()
{
	cout << "Cat created." << endl;

	happy = true;
}


Cat::~Cat()
{
	cout << "Cat destroyed." << endl;

}
