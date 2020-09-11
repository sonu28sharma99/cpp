#include<iostream>
using namespace std;

void Insertion_sort(int arr[], int n){
    int temp, i, j;
    
    for(i=1; i<n; i++){
        temp = arr[i];
        j = i-1;
        
        while( j>=0 and arr[j] > temp ){
                arr[j+1] = arr[j];
                j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    Insertion_sort(arr, n);
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    
return 0;
}
