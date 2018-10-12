#include <iostream>
using namespace std;

int main() {
	char c;
	int x = 0, y = 0;
	while (cin >> c) {
		if (c == 'n')
			y -= 1;
		else if (c == 's')
			y += 1;
		else if (c == 'e')
			x += 1;
		else if (c == 'o')
			x -= 1;
	}

	cout << "(" << x << ", " << y << ")" << endl;
} 
