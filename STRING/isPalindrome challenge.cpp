/* -------------------------------- QUESTION -------------------------------- */
/*
Take as input N, a number. Take N more inputs and store that in an array. 
Write a recursive function which tests if the array is a palindrome and returns a Boolean value. 
Print the value returned.

Input Format
Enter a number N , add N more numbers

Constraints
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true
*/

/* ----------------------------------- END ---------------------------------- */

#include<iostream>
#include<cstring>
using namespace std;


bool isPalindrome(int arr[], int n){
    int start = 0;
    int last = n-1;

    while(start < last){
        if(arr[start]!=arr[last]){
            return false;
        }
        start++;
        last--;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    if(isPalindrome(arr,n))
        cout<< "true" <<endl;
    else
        cout<< "false" <<endl;
}