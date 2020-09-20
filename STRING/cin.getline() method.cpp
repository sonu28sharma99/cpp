/* -------------------------------------------------------------------------- */
/*        cin.getline(variable_name, max_size) method is used to read sentences from the user.       */
/* -------------------------------------------------------------------------- */
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[1000];
    cin.getline(ch,1000);

    cout<<ch;

}