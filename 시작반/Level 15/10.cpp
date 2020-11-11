#include <iostream>
using namespace std;

int main(void) {
	char arr[3][6] = {
		"FRQWT",
		"GASYQ",
		"ASADB"
	};

	int input;
	cin >> input;

	for (int i = 0; i < 3; i++) {
		cout << arr[i][input];
	}
	return 0;
}