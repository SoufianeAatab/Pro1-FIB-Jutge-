#include <iostream>

using namespace std;

int main() {
	char c;

	cin >> c;

		if (c > 90) {
			cout << "minuscula" << endl;
			if (c == 'a' || c == 'e' or c == 'i'
				or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I'
				or c == 'O' or c == 'U') {
				cout << "vocal" << endl;
			}
			else 
			{
				cout << "consonant" << endl;
			}
		}
		else {
			cout << "majuscula" << endl;
			if (c == 'a' or c == 'e' or c == 'i'
				or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I'
				or c == 'O' or c == 'U') {
				cout << "vocal" << endl;
			}
			else
			{
				cout << "consonant" << endl;
			}

		}
}