#include <iostream>

using namespace std;

int main() {
    
    cout << "bir sayi giriniz: "<< endl;
    int n;
    cin >>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-(i+1); j++){ // bosluklar
            cout << " ";
        }
        for(int j = 0; j<i+1; j++){ //yıldızlar
            cout << "*";
        }
        
        cout << endl;
    }
    
    
    
    return 0;
}
