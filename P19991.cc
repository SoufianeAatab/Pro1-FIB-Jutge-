#include <iostream>
#include <string>
using namespace std;

int main() {
	int f, c, suma = 0;
	char ca;
	cin >> f;
	c = f;
	for (int i = 0; i < f; i += 1) {
		for(int j = 0; j < f; j +=1) {
			cin >> ca;
			if (i == j or (c- 1- i) == j) {
				suma += ca - '0';
			}
		}
	}

	cout << suma << endl;
} 
