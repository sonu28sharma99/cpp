/* -------------------------------------------------------------------------- */
/*            PROGRAM TO ROTATE MATRIX BY 90 DEGREE ANTI-CLOCKWISE            */
/* -------------------------------------------------------------------------- */

#include <iostream>
#include <cstring>
using namespace std;

/* ----------------------------- ROTATE FUNCTION ---------------------------- */

void rotate_image(int arr[][1000], int n){
    
    // first we reverse all the rows
    for(int row=0; row<n; row++){

        int start = 0;
        int end = n-1;

        while(start<end){
            swap(arr[row][start],arr[row][end]);
            start++;
            end--;
        }
    }

    // Now we Transpose the matrix
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(row<col)
                swap(arr[row][col],arr[col][row]);
        }
    }
return;
}


/* ----------------------------- DRIVER FUNCTION ---------------------------- */
int main()
{
    //square matrix i.e row = column = n
    int n;

    int arr[1000][1000];

    //input matrix
    for(int row=0; row<n; row++){
        for(int column=0; column<n; column++)
            cin>>arr[row][column];
    }

    rotate_image(arr,n);

    //print matrix
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++)
            cout<<arr[row][col]<<" ";
        cout<<endl;
    }
}