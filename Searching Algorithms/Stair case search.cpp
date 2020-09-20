#include<iostream>
using namespace std;

void staircase_search(int arr[][100] ,int n, int key){
    int start = 0;
    int end = n-1;

    while(start<n && end >=0){
        if(arr[start][end]==key)
            cout << key <<" is present at "<< start+1 <<"," << end+1;
        else if(arr[start][end]<key){
            start++;
        } 
        else(arr[start][end]>key)
            end--;
    }
    cout << "Element not present..!!!";
}


int main(){
    int n;
    cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }

    int key;
    cin >> key;

    staircase_search(arr, n, key);
    

}