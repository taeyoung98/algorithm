#include <iostream>
using namespace std;

int main(void) {
	int arr[3][5] = {
		5,1,4,2,6,
		3,5,0,0,7,
		9,9,8,3,1
	};

	int input;
	cin >> input;

	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (input < arr[i][j]) {
				cnt++;
			}
		}
	}

	cout << cnt << "개";

	return 0;
}