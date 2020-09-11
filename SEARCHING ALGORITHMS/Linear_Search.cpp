#include<iostream>
using namespace std;

int LinearSearch(int n, int arr[], int key){
    for(int i=0; i<n; i++){
        if(key == arr[i])
            return i;
    }
    return -1;
}


int main()
{
    int n; cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    
    int index = LinearSearch(n, arr, key);
    
    if(index != -1)
        cout << "key found at " << index + 1 << " position" << endl;
    else 
        cout << "key not found...!" << endl;
        
return 0;
}
