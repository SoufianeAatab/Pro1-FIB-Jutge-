#include <iostream>
using namespace std;

int main() {
	int a, b, r, s;

	cin >> a >> b;
	r = a - (a / b) * b;
	s = a / b;
	if (r < 0) {
		r = b + r;
		s = (a / b) - 1;
	}
	cout << s << " " <<  r << endl;
}
