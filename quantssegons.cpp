#include <iostream>
using namespace std;

int main() {
	int any, dies, hores, minuts, segons;

	cin >> any >> dies >> hores >> minuts >> segons;

	int result = segons;
	result = result + (minuts * 60);
	result = result + (hores * 3600);
	result = result + (dies * 24 * 3600);
	result = result + (any * 365 * 24 * 3600);
	cout << result << endl;
}