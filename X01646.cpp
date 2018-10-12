#include <iostream>
using namespace std;

int main() {
	int b, n, sum;
	cin >> b;

	while (cin >> n) {
		sum = 0;
		cout << n << ": ";
		while(n != 0){
			sum += n % b;
			n = n / b;
		}
		cout << sum << endl;
	}
} 
