#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	int c = 0;
	for (int i = 2; i <= 16; i++) {
		c = 0;
		m = n;
		while (m != 0) {
			m = m / i;
			c++;
		}
		cout << "Base "<< i << ": " << c << " cifras."<< endl;
	}

}
