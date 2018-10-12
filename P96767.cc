#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, c, result = 0 , i =0;
	cin >> x;
	
	cout.setf(ios::fixed);
	cout.precision(4);

	while (cin >> c) {
		result += c * pow(x, i);
		i += 1;
	}
	cout << result << endl;
} 
