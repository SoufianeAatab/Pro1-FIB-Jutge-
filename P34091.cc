#include <iostream>
using namespace std;

bool es_perfecte(int x){
    int suma = 1;
    
    for(int i=2; i*i <= x; i++){
        if(x % i == 0) {
            suma += i + x / i;
        }
    }
    
    if(suma == x and x != 0 and x != 1)
        return true;
    
    return false;
}

int main () {
  int x;
  while (cin >> x) cout << (es_perfecte(x) ? "true" : "false") << endl;
}
