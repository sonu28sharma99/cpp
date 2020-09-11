#include<iostream>
#include<algorithm>
using namespace std;

void display_matrix(int arr[][100], int m, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << arr[i][j];
        cout<<endl;
    }
}









int main(){
    int m,n;
    cin >> m >>n;
    int arr[100][100];

    display_matrix(arr,m,n);
}