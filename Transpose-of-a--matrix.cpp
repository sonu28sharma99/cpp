#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    int arr[m][n];
    int a[m][n]={{0}};
 
/* -------------------------- Input array elements -------------------------- */
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

/* ------------------------------- Print Array ------------------------------ */
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
/* ---------------------------- Transpose Matrix ---------------------------- */
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            a[i][j]=arr[j][i];
    }

/* ------------------------------ Print Transposed Matrix ------------------------------ */
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
return 0;

}