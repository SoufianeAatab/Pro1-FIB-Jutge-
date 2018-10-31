#include <iostream>
#include "math.h"
using namespace std;


bool es_capicua(int n){
    if(n < 9)
        return true;
    
    int temp = n;
    int ndigits = 0;
    while(temp > 9){
        temp = temp / 10;
        ndigits += 1;
    }
    int tdigits = ndigits;
    while(tdigits != ndigits/2){
        if((int)(n / pow(10,tdigits)) % 10!= n % (int)pow(10,ndigits - tdigits + 1) / (int)pow(10,ndigits - tdigits )) return false;
                
        tdigits -= 1;
    }
    
    return true;
    
}


int main() {
    int n;
    while (cin >> n) cout << (es_capicua(n) ? "true" : "false") << endl;
}
