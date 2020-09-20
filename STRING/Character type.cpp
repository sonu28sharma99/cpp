/*
Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. 
Print the value returned.

Input Format
Character (ch)

Constraints
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L
Explanation
Anyone can Do it using Ascii codes. I dare you - "Try to not use ascii codes." ;)
*/

#include<iostream>
#include<cstring>
using namespace std;

void character_type(char ch){

    if(ch >= 'A' and ch <= 'Z')
        cout << "U" <<endl;
    
    else if(ch >= 'a' and ch <= 'z')
        cout << "L" <<endl;
    
    else
        cout << "I" <<endl;
}



int main(){

    char ch;
    cin.get(ch);

    character_type(ch);
}