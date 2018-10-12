#include<iostream>
using namespace std;

int main() {
	double n, harmonic;
	cin >> n;
	harmonic = 0;
	for (int i = 1; i <= n; i++) {
		harmonic += (1.0f / i);
	}
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << harmonic << endl;
}
