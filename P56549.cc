#include <iostream>

using namespace std;

char toHexa(int n){

    if(n == 10) return 'A';
    else if(n == 11) return 'B';
    else if(n == 12) return 'C';
    else if(n == 13) return 'D';
    else if(n == 14) return 'E';
    else return 'F';
}

void canvi_base(int n, int b){
    if(n > (b-1)){
        canvi_base(n/b,b);
    }
    
    if(b == 16 and n % b > 9) cout << toHexa(n % b);
    else cout << n % b;
}

int main(){
    int n;
    while(cin >> n) {
        cout << n << " = ";
        canvi_base(n,2);
        cout << ", ";
        canvi_base(n,8);
        cout << ", ";
        canvi_base(n,16);
        cout << endl;
    }
}
