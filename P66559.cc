#include <iostream>

using namespace std;

void escriu_triangle(int t){
    for(int i=0;i<t*2;i++){
        for(int j=i;j< (t * 2)-1;j++){
            cout << " ";
        }
            
        if(i % 2 == 0) {
            for(int j=t*2 - i - 1;j<t*2;j++){
                if((j+1)%2==0) cout << "/\\";
                else cout << "  ";
                
            }
        } else{
            for(int j=t - (i/2) - 1;j<t;j++){
                cout << "/__\\";
            }
        }
        
        cout << endl;
    }
    cout << endl;
}

int main(){

    int n;
    while((cin >> n) and n > 0) {
        escriu_triangle(n);
    }
}
