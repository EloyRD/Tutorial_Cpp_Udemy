#include <iostream>
#include <string>

using namespace std;

int main() {

	int timesTable[12][10];
	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			timesTable[i][j] = (i + 1)*(j + 1);
		}
	}


	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << timesTable[i][j] << ", " << flush;
		}
		cout << endl;
	}



	return 0;
}