#include<iostream>
#include<cstring>
using namespace std;

/* -------------------------------------------------------------------------- */
/*                             FIND LARGEST STRING                            */
/*                            FROM A LIST OF STRING                           */
/* -------------------------------------------------------------------------- */

int main(){
    int n;
    cin >> n;

    int max_length = 0;
    char max_char[1000];

    //first of all read first \0 character.
    cin.get();
    
    while(n--){
        char ch[1000];
        cin.getline(ch,1000);

        if(strlen(ch)>max_length){
            max_length = strlen(ch);
            strcpy(max_char, ch);
        }
    }
    cout<< max_length <<endl;
    cout<< max_char <<endl;
}