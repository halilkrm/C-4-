#include <iostream>

using namespace std;

int main(){
    
    int x[3] = {1,2,3};
    int *p;
    p = &x[0]; // p = x  de aynı şey
    cout<< p[2]<< endl;
    p[2]= 8;
    cout<< x[2] <<endl;
    
    
    
}
