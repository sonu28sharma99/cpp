#include<iostream>
using namespace std;

/* -------------------------------------------------------------------------- */
/*                      PRINT A MATRIX IN A                                   */
/*                          WAVE PATTERN                                      */
/* -------------------------------------------------------------------------- */

void wave_print(int arr[][10], int m, int n){

    for(int col=0; col<m; col++){
        //even column's
        if(col%2==0){
            for(int i=0)

        }
        else{

        }
    }
}
















/* ----------------------------- DRIVER FUNCTION ---------------------------- */

int main(){

    //input row & column
    int m, n;
    cin >> m >> n;

    int arr[10][10];

    //input matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }

    wave_print(arr, m, n);
}
