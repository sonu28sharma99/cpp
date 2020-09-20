#include<iostream>
#include<cstring>
using namespace std;

/* ----------------------- PALINDROMIC STRING FUNCTION ---------------------- */
bool isPalindome(char a[]){

    int starting=0;
    int ending=strlen(a)-1;

    while(starting<ending){
        if(a[starting]==a[ending]){
            starting++;
            ending--;
        }
        else
            return false;
        
    }
    return true;
}

/* -------------------------- main driver function -------------------------- */
int main(){
    char a[1000];
    cin.getline(a,1000);

    if(isPalindome(a))
        cout<<"YES..! it is palindrome"<<endl;
    else
        cout<<"Not a Palindromic String.."<<endl;
    
}