/* -------------------------------------------------------------------------- */
/*                            TRANSPOSE OF A MATRIX                           */
/* -------------------------------------------------------------------------- */

#include<iostream>
using namespace std;

/* --------------------------- Transpose function --------------------------- */

void transpose(int arr[][10], int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col<row)
                swap(arr[row][col],arr[col][row]);
        }
    }
}

/* -------------------------- main driver function -------------------------- */

int main(){
    int n;
    cin >> n;

    int arr[10][10];

    //input matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    //using transpose function
    transpose(arr,n);

    //for space in output
    cout<<endl;

    //print matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

}