#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

int main() {
	double interes,divisor;
	string temps;

	cin >> interes;
	getline(cin, temps);
	
	
	if (temps == " semestral") {
		divisor = 2;
	}
	else if (temps == " setmanal") {
		divisor = 52;
	}
	else if (temps == " mensual") {
		divisor = 12;
	}
	else if (temps == " trimestral") {
		divisor = 4;
	}

	cout.setf(ios::fixed);
	cout.precision(4);
	double result = 100 * pow((interes / (divisor * 100)) + 1, divisor) - 100;
	cout << result << endl;
}