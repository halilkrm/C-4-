// dizilerde pointerdır
#include <iostream>

using namespace std;

void f(int *p){
    p[2] = 20;
    
}

int topla(int *a, int boyut){
   int toplam = 0;
    for(int i = 0; i<boyut; i++){
        toplam += a[i];
    }
    return toplam;
}



int main (){
    
    int a[3]= {1,2,3};
    
    cout << a[2] << endl;
    f(a);
    cout << a[2] << endl;
    cout << "toplam: "<< topla(a,3)<< endl;
}
