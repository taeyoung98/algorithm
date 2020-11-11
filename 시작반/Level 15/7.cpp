#include <iostream>
using namespace std;

struct Product {
	char name[6];
	int size;
	int price;
};

int main(void) {
	Product a, b;
	
	cin >> a.name >> a.size >> a.price;
	cin >> b.name >> b.size >> b.price;

	cout << a.name << "," << b.name << endl;
	cout << "AverageSize=" << (a.size + b.size) / 2 << endl;
	cout << "AveragePrice=" << (a.price + b.price) / 2;

	return 0;
}