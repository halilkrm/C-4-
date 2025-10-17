#include <iostream>

using namespace std;

int main(){
    
    char c;
    cout << "lutfen bir buyuk harf giriniz: "<< endl;
    cin>>c;
    
    for(int i = c-65; i<26; i++){
        for(int j = c-65; j<=i;j++){   // C-65 c harfinin a ya olan uzaklığı
            cout << (char)(j+65);
        }
        
        for(int j = i-1; j>=c-65; j--){
            cout << (char)(j+65);
        }
        cout<< endl;
    }
    
    
    
    
    
    return 0;
}
