#include<iostream>
using namespace std;

int main() {
	int x, y, n = 0;
	cin >> x;
	while (cin >> y) {
		if (y % x == 0) n += 1;
	}

	cout << n << endl;
}