#include <iostream>

using namespace std;

int main() {
    
    for(int i = 1; i<=4; i++ ){  //satır
        for(int j = 1; j<=4; j++){ //sütun
            cout << i*j << ",";
        }
        
        cout<< endl;
    }
    
    
    
    return 0;
}
