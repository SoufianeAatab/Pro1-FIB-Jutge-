#include <iostream>
using namespace std;

int main() {
	int f, b = 0, n = 0;
	char ca;
	cin >> f;

	for (int i = 0; i < f; i += 1) {
		for (int j = 0; j < f; j += 1) {
			cin >> ca;
			if (i % 2 == 0 and j % 2 == 0) {
				b += ca - '0';
			}
			else if (i % 2 != 0 and j % 2 != 0) {
				b += ca - '0';
			}
			else {
				n += ca - '0';
			}
		}
	}

	cout << b << "-" << n << " = " << b - n << endl;
}