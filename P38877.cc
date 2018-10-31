#include <iostream>

using namespace std;

void reves(int &n){
    string name = "";
    if(cin >> name){
        reves(n);
    }
    
    if(n >= 0){
        if(name != "")cout << name << endl;
    
        n = n-1;
    }
}

int main(){
    int n = 0;
    cin >> n;
    reves(n);
    
}
