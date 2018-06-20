#include <iostream>
#include "Cati.h"

using namespace std;

void Cati::speak() {
	if (happy) {
		cout << "Meowwww!!!" << endl;
	}
	else {
		cout << "Sssssss!!!" << endl;
	}
}

void Cati::makeHappy() {
	happy = true;
}

void Cati::makeSad() {
	happy = false;
}


Cati::Cati()
{
}


Cati::~Cati()
{
}
