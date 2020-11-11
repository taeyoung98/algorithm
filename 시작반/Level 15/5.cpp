#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int start = a;
	
	for (int j = 0; j < c; j++) {

		for (int i = 0; i < b; i++) {
			cout << start++ << " ";
		}
		start = a;
		cout << endl;
	}

	return 0;
}