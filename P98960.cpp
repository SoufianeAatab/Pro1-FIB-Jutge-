#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;

	if (c > 'Z') 
		c = c - 32;
	else 
		c = c + 32;

	cout << c << endl;
}
