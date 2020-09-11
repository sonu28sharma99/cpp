#include<iostream>
using namespace std;

// Bubble sort
void Bubble_sort(int arr[], int n){
    for(int itr=1; itr<n; itr++){
        // In each iteration 1 element will be sorted.
        for(int i=0; i<n-itr; i++){
            if(arr[i+1]<arr[i])
                swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    Bubble_sort(arr, n);
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    
return 0;
}
