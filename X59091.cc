#include <iostream>
using namespace std;

int main() {
	int f, c;
    bool primer = true;
	while (cin >> f >> c) {
        if (!primer) cout << endl;

		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				cout << 9 - ((c*i + j) % 10);
			}
			cout << endl;
		}

        primer = false;
	}

}