// Note:-
//      - if you want to create 2-D array dynamically then,
//      - you have to create an array of rows dynamically.
//      - then create the array of columns.



#include<iostream>
using namespace std;

int main(){

    int r=3, c=3;

    int **arr = new int*[r];

    // creating array of rows
    for(int i=0; i<r; i++)
        arr[i] = new int[c];
    
    // creating array of columns
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>> arr[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<< arr[i][j] <<",";
        }
        cout<<endl;
    }

    // Deallocation is very very important
    // it may cause, memory leak

    delete arr;


}