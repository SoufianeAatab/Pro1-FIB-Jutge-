#include <iostream>
#include <string>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int t;
	double c, i;
	string tipo;

	cin >> c;
	cin >> i;
	cin >> t;
	cin >> tipo;
	
	double sum = c;
	if (tipo == "simple") {
		cout << c + ((c * (i / 100.0f)) * t) << endl;
	}
	else if(tipo == "compost"){
		for (int j = 0; j < t; j++) {
			sum += ((sum * (i / 100.0f))) ;
		}
		cout << sum << endl;

	}


} 
