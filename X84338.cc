#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, sum1 = 0, sum2 = 0;

	cin >> n;
	int ndigits = 0;
	int temp = n;
	while (temp != 0) {
		ndigits += 1;
		temp = temp / 10;
	}
	if (ndigits % 2 == 0 and n != 0) {
		int p = pow(10, ndigits /2);
		int primeramitad = n % p;
		int segundamitad = n / p;
		for (int i = 0; i < ndigits / 2; i++) {
			sum1 = sum1 + (primeramitad % 10);
			primeramitad = primeramitad / 10;

			sum2 = sum2 + (segundamitad % 10);
			segundamitad = segundamitad / 10;
		}

		if (sum1 == sum2) {
			cout << sum1 << " = " << sum2 << endl;
		}
		else if (sum2 < sum1) {
			cout << sum2 << " < " << sum1 << endl;
		}
		else {
			cout << sum2 << " > " << sum1 << endl;
		}
	}
	else cout << "res" << endl;
}