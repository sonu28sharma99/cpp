#include<iostream>
using namespace std;

// int* func(){
//    int a[] = {100,200,3,4,5};  // static allocation

//    cout<< a <<endl;
//    cout<< a[1] <<endl;

// return a;
// }


int* func(){
    int *a = new int[5];
    a[0] = 100;
    a[1] = 200;

    cout<< a <<endl;
    cout<< a[0] <<endl;

return a;
}

int main(){
    
    int *b = func();

    cout<< b <<endl; 
    cout<< b[0] <<endl;   

    return 0;
}