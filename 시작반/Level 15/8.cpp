#include <iostream>
using namespace std;

int main(void) {
	char a[3]; // A A P
	char* p[3] = { 0 };

	cin >> a[0] >> a[1] >> a[2];
	
	p[0] = &a[0];
	p[1] = &a[1];
	p[2] = &a[2];

	char max = 'A'-1;
	for (int i = 0; i < 3; i++) {
		if (*p[i] > max) {
			max = *p[i];
		}
	}

	cout << (char)max;
	
	return 0;
}