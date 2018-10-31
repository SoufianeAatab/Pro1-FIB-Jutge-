#include <iostream>
#include "math.h"
using namespace std;

int main(){
    int n;
    while(cin >> n){
        cout << n * n << " ";
        cout.setf(ios::fixed);
        cout.precision(6);
        cout << sqrt(n) << endl;
    }
}
