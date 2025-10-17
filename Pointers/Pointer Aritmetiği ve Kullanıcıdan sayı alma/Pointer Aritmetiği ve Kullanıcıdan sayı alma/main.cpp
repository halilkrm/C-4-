#include <iostream>

using namespace std;

int main() {
    
    cout << "Lürfen bes sayı giriniz: "<< endl;
    int *p;
    p = (int*)malloc(sizeof(int)*5); // malloc void* döndürür
    
    for(int i = 0; i<5; i++){
        cin>> p[i];  // *(p+i) kullanabiliriz >>>> pointer aritmetiği
    }
    
    for(int i = 0; i<5; i++){
        cout<< p[i];
    }
}
