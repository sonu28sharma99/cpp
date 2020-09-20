/* -------------------------------------------------------------------------- */
/*                          PROGRAM TO REVERSE STRING                         */
/* -------------------------------------------------------------------------- */

#include<iostream>
#include<cstring>
using namespace std;

/* ---------------------------- reverse funcrion ---------------------------- */
void reverse(char ch[]){
    int start = 0;
    int end = strlen(ch)-1;

    while(start<end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    return;
}

/* -------------------------- main driver function -------------------------- */
int main(){
    char ch[1000];
    cin.getline(ch,1000);

    reverse(ch);

    cout<<ch;
}