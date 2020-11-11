#include <iostream>
using namespace std;

int main(void) {
	char arr[7] = "APPLET";
	char input[6];
	
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			if (input[i] == arr[j]) cnt++;
		}
	}

	cout << cnt << "개 맞추었습니다";

	return 0;
}