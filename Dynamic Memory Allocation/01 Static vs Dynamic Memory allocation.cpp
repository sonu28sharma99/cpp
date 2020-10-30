#include<iostream>
using namespace std;
int main(){
    
    // Static Memory Allocation
    int a[100];
    cout<< sizeof(a) <<endl;


    // Dynamic memory Allocation
    //          - You have to create a pointer that will store the address of dynamically created array.

    int *b = new int[100];
    cout<< sizeof(b);

    // Note:-
    //      - Both the array of the same size i.e 100
    //      - but memory allocated is different.
    //      - The array that is created statically is allocated 400 bytes of memory.
    //      - And the array that is created dynamically allocate 4 bytes of memory.
    
    // Another Note:-
    //      - Static Memory Allocation use Stack Data Structure.
    //      - Static Memory allocation is also known as Compile time memory allocation.
    //      - Dynamic Memory Allocation use heap data Structure.
    //      - Dynamically memory allocation is also known as Run time memory allocation.

}