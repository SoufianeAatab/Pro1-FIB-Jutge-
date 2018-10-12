#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2;
	int z1, z2;
	cin >> x1 >> y1 >> x2 >> y2;

	if (x1 == x2 and y1 == y2) {
		cout << "= , [" << x1 << "," << y1 << "]" << endl;
	} 
	else if (x1 >= x2 and y1 <= y2) {
		cout << "1 , [" << x1 << "," << y1 << "]" << endl;
	}
	else if (x1 <= x2 and y1 >= y2) {
		cout << "2 , [" << x2 << "," << y2 << "]" << endl;
	}
	else if (x1 >= x2 and y1 >= y2 and y2 >= x1) {
		cout << "? , [" << x1 << "," << y2 << "]" << endl;
	}
	else if (x1 <= x2 and y1 <= y2 and y1 >= x2) {
		cout << "? , [" << x2 << "," << y1 << "]" << endl;
	} 
	else {
		cout << "? , []" << endl;
	}
}
