#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y;
	int sum = 0;
	while ((cin >> x >> y)) {
		sum = 0;
		int a = x;
		while (a <= y) {
			sum += pow(a, 3);
			a++;
		}
		cout << "suma dels cubs entre "<< x <<" i "<< y <<": " << sum << endl;
	}
}