#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "enter size of the array : "; cin >> n;
    
    // creating array dynamically
    int *arr = new int[n]{0};    // initally initializing with 0

    // taking input
    for(int i=0; i<n; i++)
        cin>> arr[i];

    // output the array
    for(int i=0; i<n; i++)
        cout<< arr[i] <<", ";
    

    // most important part

    // deallocate the memory
    delete arr;



}