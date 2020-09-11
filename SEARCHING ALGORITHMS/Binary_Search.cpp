#include<iostream>
using namespace std;

int BinarySearch(int n, int arr[], int key){
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        int mid = (start + end)/2;
        
        if(arr[mid] == key)
            return mid;
            
        else if (arr[mid] < key)
            start = mid + 1;
        
        else 
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int n; cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int key;
    cin >> key;
    
    int index = BinarySearch(n, arr, key);
    
    if(index != -1)
        cout << "key found at " << index + 1 << " position" << endl;
    else 
        cout << "key not found....!" << endl;

return 0;
}
