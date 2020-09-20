#include<iostream>
#include<cstring>
using namespace std;

/* -------------------------------------------------------------------------- */
/*                  REMOVE CONSECUTIVE DUPLICATES CHARACTERS                  */
/* -------------------------------------------------------------------------- */
/* --------------------------- CCOOODING -> CODING -------------------------- */

void remove_duplicates(char a[]){
    int l = strlen(a);

    if(l==0 or l==1)
        return;

    int i=0;
    for(int j=1; j<l; j++){
        if(i==j){
            j++;
        }
        else{
            if(a[j]!=a[i]){
                j++;
                a[j]=a[i];
            }
        }
    }
    a[i+1]='\0';
    return;
}

int main(){
    char a[1000];
    cin.getline(a,1000);

    remove_duplicates(a);

    cout<<a<<endl;
}