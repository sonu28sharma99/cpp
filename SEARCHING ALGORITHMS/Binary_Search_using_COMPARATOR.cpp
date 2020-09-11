#include<iostream>
using namespace std;

// comparator function:- 
bool compare(int a, int b){
    return a < b;               // we can reverse the order of sorting - return a > b
}

// passing function as a parameter in bubble_sort function
void bubble_sort(int arr[], int n, bool (&compare)(int a, int b)){
    for(int itr=1; itr<n; itr++){
        for(int i=0; i<n-itr; i++){
            if(compare(arr[i],arr[i+1]))
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
        
    bubble_sort(arr, n, compare);
    
    for(int i=0; i<n; i++)
        cout << arr[i] <<" ";
    
return 0;
}
