#include <iostream>
using namespace std;

int main(void) {
	int arr1[2][3];
	int arr2[6];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr1[i][j];
		}
	}

	int idx = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr2[idx++] =  arr1[i][j];
		}
	}

	// 선택정렬
	// arr2[6] = { 5, 3, 6, 1, 3, 2 }
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (arr2[i] > arr2[j]) {
				int tmp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = tmp;
			}
		}
	}

	int index = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[index+j] << " ";
		}
		cout << endl;
		index = 3;
	}

	return 0;
}