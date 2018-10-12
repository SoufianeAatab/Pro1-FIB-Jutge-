#include <iostream>
using namespace std;

int main() {
	int n;
	int pasos = 0;
	while(cin >> n){
		pasos = 0;
		while ( n > 1) {
			if (n % 2 == 0) {
				n = n / 2;
			} else {
				n = 3 * n;
				n = n + 1;
			}
			pasos += 1;
		}
	
		cout << pasos << endl;
	}
} 
