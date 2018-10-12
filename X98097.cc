#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, sum1 = 0, sum2 = 0, d=0;
	cin >> n;
	int i = 0;
	while (n != 0) {
		d = n % 10;
		n = n / 10;
		if (i % 2 == 0) {
			sum1 += d;
		}else {
			sum2 += d;
		}

		i = i + 1;
	}
	cout << sum1 << " " << sum2 << endl;
	if(sum1 != 0 and sum2 !=0){
		if (sum1 % sum2 == 0) {
			cout << sum1 << " = "<< sum1 / sum2 << " * " << sum2 << endl;
		}
		else if(sum2 % sum1 == 0){
			cout << sum2 << " = " << sum2 / sum1 << " * " << sum1 << endl;
		}
		else {
			cout << "res" << endl;
		}
	}

	if (sum1 == 0) {
		cout << sum1 << " = " << 0 << " * " << sum2 << endl;
	}else if(sum2 == 0){
		cout << sum2 << " = " << 0 << " * " << sum1 << endl;

	}
}