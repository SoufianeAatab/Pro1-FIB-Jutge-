#include <iostream>
using namespace std;

int main() {
	int n, prod = 1, d;
	while(cin >> n){
		if (n <= 9) {
			cout << "El producte dels digits de " << n << " es " << n << "." <<endl;
		} else{
			while(n > 9){
				cout << "El producte dels digits de " << n << " es ";
				while(n > 0){
					d = n % 10;
					n = n / 10;
					prod = prod * d;
				}
				cout << prod << "." << endl;
				n = prod;
				prod = 1;
			}
		}
		cout << "----------" << endl;
	}
} 
