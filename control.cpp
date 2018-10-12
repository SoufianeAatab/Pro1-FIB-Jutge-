#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	double n, x, y, radi, area;
	string tipo;
	cin >> n;
	cout.setf(ios::fixed);
	cout.precision(6);
	for (int i = 0; i < n; i++) {
		cin >> tipo;
		if (tipo == "rectangle") {
			cin >> x >> y;
			area = x * y;
		} else if(tipo == "cercle") {
			cin >> radi;
			area = M_PI * radi * radi;
		}
		cout << area << endl;
	}
} 