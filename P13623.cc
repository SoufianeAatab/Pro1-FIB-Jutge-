#include <iostream>
#include <string>
using namespace std;

int main() {
	int f, c, suma = 0;
	char ca;
	cin >> f >> c;

	for (int i = 0; i < f; i += 1) {
		for(int j = 0; j < c; j +=1) {
			cin >> ca;
			if (i % 2 == 0 and j % 2 == 0) {
				suma += ca - '0';
			} else if(i % 2 != 0 and j % 2 != 0) {
				suma += ca - '0';
			}
		}
	}

	cout << suma << endl;
} 
