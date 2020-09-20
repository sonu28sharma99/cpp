/* -------------------------------------------------------------------------- */
/*         PROGRAM TO REMOVE THE DUPLICATES CHARACTER FROM THE STRING.        */
/* -------------------------------------------------------------------------- */
/* -------------------------- CCOOODDING --> CODING ------------------------- */

#include<iostream>
#include<cstring>
using namespace std;

/* ---------------------- FUNCTION TO REMOVE DUPLICATES --------------------- */
void remove_duplicates(char ch[]){
    int l=strlen(ch);
    int i=0;


    for(int current=1; current<l; current++){
        if(ch[current] != ch[i]){
            i++;
            ch[i]=ch[current];
        }
    }
    ch[i+1]='\0';
    return;
}

/* -------------------------- MAIN DRIVER FUNCTION -------------------------- */
int main(){
    char ch[1000];
    cin.getline(ch,1000);

    remove_duplicates(ch);

    cout<<ch;
}