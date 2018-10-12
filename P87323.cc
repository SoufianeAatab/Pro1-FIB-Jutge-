#include <iostream>
using namespace std;

int main() {
	int f, c, n;
	cin >> f >> c;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			n = i - j;
			if (n < 0) n = -n;

			cout << n % 10;
		}
		cout << endl;
	}
} 
