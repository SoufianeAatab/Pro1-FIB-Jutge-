#include <iostream>
using namespace std;

int nombre_digits(int n){
    if(n > 9) {
        return (1 + nombre_digits(n / 10));
    } else{
        return 1;
    }
}

int main(){
    int n;
    while (cin >> n) cout << nombre_digits(n) << endl;
}
