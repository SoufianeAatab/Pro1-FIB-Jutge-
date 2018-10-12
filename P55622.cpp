#include<iostream>
using namespace std;

int main() {
	int n, m, i = 1;
	cin >> n;
	
	m = n;
	while (n >= 10) {
		n = n / 10;
		i = i + 1;
	}

	cout << "El nombre de digits de "<<m<<" es "<<i<<"." << endl;
}
