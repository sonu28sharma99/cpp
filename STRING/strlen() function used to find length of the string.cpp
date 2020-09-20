/* -------------------------------------------------------------------------- */
/*      strlen(_variable_name_) IS USED TO FIND THE LENGTH OF THE STRING      */
/* -------------------------------------------------------------------------- */
#include<iostream>
#include<cstring>
using namespace std;
int main(){

/* ------------------------------ input string ------------------------------ */
    char ch[1000];
    cin >> ch;

/* ------------------------ getting length of the string ------------------------ */
    cout<<strlen(ch);
}