#include <iostream>

using namespace std;

int main() {
    
    // 0001 i=0,j=3  b=4  i+j = b-1
    // 0010 i=1,j=2
    // 0100 i=2,j=1
    // 1000 i=3,j=0       dörde dört matrix i ve j nin toplamı 3!
    
    int b;
    cout << "boyutu giriniz: "<< endl;
    cin>> b;
    
    for(int i = 0; i<b; i++){  // satır
        for(int j = 0; j<b; j++){ // kolon
      if(i+j == b-1) // alt üçgen
      cout << "1";
            else
                cout << "0";

        }
        
        cout << endl;
    }
    
    
    return 0;
}
