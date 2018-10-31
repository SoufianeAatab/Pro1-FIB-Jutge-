#include <iostream>
using namespace std;


void descompon(int n, int& h, int& m, int& s){
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n - ((h * 3600) + (m * 60));
}

int main() {
    int n, h, m, s;
    while (cin >> n) {
        descompon(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}
