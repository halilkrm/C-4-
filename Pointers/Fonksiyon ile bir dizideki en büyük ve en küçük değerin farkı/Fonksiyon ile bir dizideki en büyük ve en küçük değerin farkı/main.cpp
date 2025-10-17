#include <iostream>

using namespace std;

int f(int *a,int boyut){
    int eb = a[0];
    int ek = a[0];
    
    for(int i = 0; i<boyut; i++){
        if(a[i]>eb){
            eb = a[i];
        }
        if(a[i]<ek){
            ek = a[i];
        }
    }

    return eb-ek;
}
int main() {
    
    int a[6] = {1,2,3,4,5,6};
    
    cout << f(a,6)<<endl;
    
}
