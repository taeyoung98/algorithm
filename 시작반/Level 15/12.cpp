#include <iostream>
using namespace std;

int main(void) {
	int vect[4][4];
	int input;
	cin >> input; // ex. 1

	for (int i = 0; i < 4; i++) {
		if (i == 0 || i == 2) { // ex. 1 2 3 4
			for (int j = 0; j < 4; j++) {
				vect[i][j] = input++;
			}
		}
		else if (i == 1 || i == 3) { // ex. 8 7 6 5
			for (int k = 3; k >= 0; k--) {
				vect[i][k] = input++;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}