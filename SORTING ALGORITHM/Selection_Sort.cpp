#include<iostream>
using namespace std;

// Selection sort:-
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        
        //find out the idx of smallest number.
        int min_idx = i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        // after this loop, finally we swaping.
        swap(arr[i], arr[min_idx]);
    }
}


int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    selection_sort(arr, n);
    
    for(int i=0; i<n; i++)
        cout << arr[i] << ", ";
    
    return 0;
}
