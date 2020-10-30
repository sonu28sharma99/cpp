#include<iostream>
using namespace std;
int main(){

/* ------------------------ ARRAY CREATED STATICALLY ------------------------ */

    int n = 5; // array size
    int arr[n];

    // input array
    for(int i=0; i<n; i++)
        cin>>arr[i];

    // output array
    for(int i=0; i<n; i++)
        cout<<arr[i] <<endl;

/* ------------------------ ARRAY CREATED DYNAMICALLY ----------------------- */

    int array_size = 5;

    int *p = new int[array_size]; // dynamically created array

    // input array
    for(int i=0; i<n; i++)
        cin>>p[i];

    // output array
    for(int i=0; i<n; i++)
        cout<< p[i]<<endl;

    // Veay Important is to 
    // Deallocate the Memory after usage.
    delete p;
    
/* -------------------- COMPARING SIZE OF BOTH THE ARRAY -------------------- */

    cout<< "size if dynamically created array is " << sizeof(p) << " || at the location " << arr <<endl; // 4 bytes

    cout<< "size of statically created array is " << sizeof(arr) << " || at the location " << p <<endl; // 20 bytes
}