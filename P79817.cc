#include <iostream>
using namespace std;

int main() {
int n, p, potencia = 1;

	while (cin >> n >> p) {
		for (int i = 0; i < p; i++) {
			potencia = potencia * n;
		}
		cout << potencia << endl;
		potencia = 1;
	}
} 
