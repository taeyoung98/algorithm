#include <iostream>
using namespace std;


int arr[3][4];

void change(int idx) {
	for (int i = 0; i < 4; i++) {
		arr[idx-1][i] = 7;
	}
}

int main(void) {
	int num = 1;
	for (int i = 2; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			arr[i][j] = num++;
		}
	}

	int input;
	cin >> input;
	change(input);
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}