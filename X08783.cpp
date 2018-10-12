#include <iostream>
using namespace std;

int main() {
	int b, n, sum;
	while (cin >> b >> n) {
		sum = 0;
		while (n != 0) {
			sum = sum + 1;
			n = n / b;
		}
		cout << sum << endl;
	}
} 
