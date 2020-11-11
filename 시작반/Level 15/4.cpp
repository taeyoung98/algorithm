#include <iostream>
using namespace std;

int main(void) {
	int juso[8] = { 402,401,302,301,202,201,102,101 };
	char name[8][5] = {
		'K', 'I', 'M', ' ', ' ',
		'T', 'E', 'A', ' ',' ',
		'S','O','M',' ',' ',
		'O','P','P','O',' ',
		'T','O','M',' ',' ',
		'G','D','K',' ',' ',
		'J','A','M','E',' ',
		'M','I','N',' ',' ',
	};

	int input, home;
	cin >> input;
	for (int i = 0; i < 8; i++) {
		if (juso[i] == input) home = i;
	}

	for (int i = 0; i < 5; i++) {
		cout << name[home][i];
	}

	return 0;
}