#include <iostream>

using namespace std;

void reves(){ 
    string name;
    if(cin >> name){
        if(name != "fi") {
            reves();
            cout << name << endl;
        }
    } 
    
}

int main(){
   reves();
    
}
