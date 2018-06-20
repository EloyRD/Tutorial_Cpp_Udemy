#include <iostream>
#include "Cati.h"

using namespace std;

int main() {
	Cati jim;

	jim.makeSad();
	jim.speak();

	Cati bob;

	bob.makeHappy();
	bob.speak();

	return 0;
}