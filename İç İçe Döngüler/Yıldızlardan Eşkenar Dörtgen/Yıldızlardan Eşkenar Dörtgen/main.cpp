#include <iostream>

using namespace std;
//  n=5, 2b +y=n  b = (n-y)/2
// n/2 = 2 --> 2*(i-1)+1, 2i+1
// n/2 sonrası 2(n-i)+1
//   * b2 y1    1   0
//  ***  b1 y3  2   1
// ***** b0 y5  3   2
//  ***  b1 y3  4   3
//   *  b2 y1   5   4

int main() {
    
    cout << "bir sayı giriniz: "<< endl;
    int n;
    cin >>n;
    for(int i = 0; i<n; i++){
        int y,b;
        if(i<=n/2) {
            y = 2*i +1;
            }
        else{
            y = 2*(n-i-1)+1;
        }
        
      b = (n-y)/2;

        for(int j = 0; j<b; j++){ // bosluklar
            cout << " ";
        }
        for(int j = 0; j<y; j++){ //yıldızlar
            cout << "*";
        }
        cout<< endl;
        
    }
    
    
    
    
}
