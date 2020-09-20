/* -------------------------------------------------------------------------- */
/*                              STAIR-CASE SEARCH                             */
/*                   SEARCH A PARTICULAR ELEMENT IN A MATRIX                  */
/* -------------------------------------------------------------------------- */

#include<iostream>
using namespace std;

/* -------------------------------------------------------------------------- */
/*                  NORMAL SEARCH FUNCTION TAKES O (N^2) TIME                 */
/* -------------------------------------------------------------------------- */

void normal_search(int arr[][10], int n, int ele){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ele==arr[i][j])
                cout<<i+1<<" "<<j+1<<endl;
        }
    }
}

void StairCaseSearch(int arr[][10], int n, int ele){
    int i=0;
    int j=n-1;

    while(i<n && j>0){
        //if element found
        if(arr[i][j]==ele){
            cout<<i+1 <<" "<<j+1<<endl;
            return;
        }
        else if(ele>arr[i][j]){
            i++;
        }
        else if(ele<arr[i][j]){
            j--;
        }
    }
    return;
}

/* -------------------------- MAIN DRIVER FUNCTION -------------------------- */

int main(){
    int n;
    cin>>n;

    int arr[10][10];

    //input matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }

    //input element for searching
    int ele;
    cin >> ele;

    StairCaseSearch(arr, n, ele);

    normal_search(arr, n, ele);

}