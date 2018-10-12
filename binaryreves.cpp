#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, mod;
	cin >> x;
	if (x == 0) {
		cout << 0;
	} else{
		while (x > 0) {
			mod = x % 2;
			x = x / 2;

			cout << mod;
		}
	}

    cout << endl;
}