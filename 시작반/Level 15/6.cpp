#include <iostream>
using namespace std;

int main(void) {
	int arr[9] = { 0, };
	int start, end;

	for (int i = 0; i < 3; i++) {
		cin >> start >> end;
		for (int j = start; j <= end; j++) {
			arr[j]++;
		}
		start = 0; end = 0;
	}
	
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}