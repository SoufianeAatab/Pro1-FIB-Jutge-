#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	for (int i = x; i <= y; i++) {
		cout << i;
		if (i != y) {
			cout << ",";
		}
	}
	cout << endl;
} 
