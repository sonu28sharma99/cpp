#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int arr[n][n];

/* ------------------------------- input array ------------------------------ */
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
        cin >> arr[i][j];
}

/* ---------------------------- Reverse elements ---------------------------- */
for(int row=0; row<n; row++){
    int start= 0;
    int end = n-1;

    while(start < end){
        swap(arr[row][start],arr[row][end]);
        start++;
        end--;
    }
}

/* --------------------------- Transpose of Matrix -------------------------- */
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(i<j){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

/* ----------------------------- Display Matrix ----------------------------- */
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
        cout<<arr[i][j]<<" ";
    cout<<endl;
}
}
