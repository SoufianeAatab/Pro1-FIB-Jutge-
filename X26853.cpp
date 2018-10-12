#include <iostream>
using namespace std;

int main() {
	int m, n;
    bool primer = true;
	while (cin >> n >> m) {
		if(!primer) cout << endl;
        for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << (n + m) % 5;
			}
			cout << endl;
		}

        primer = false;
	}
} 
