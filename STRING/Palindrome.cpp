/* -------------------------------------------------------------------------- */
/*             PROGRAM TO CHECK GIVEN STRING IS PALINDROME OR NOT             */
/* -------------------------------------------------------------------------- */
#include<iostream>
#include<cstring>
using namespace std;

/* -------------------- Function for checking Palindrome -------------------- */
bool is_palindrome(char ch[]){
    int i = 0;
    int j = strlen(ch)-1;

    while(i<j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else
            return false;
    }
return true;
}

/* -------------------------- main driver function -------------------------- */
int main(){
    char ch[1000];
    cin >> ch;

    if(is_palindrome(ch))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}