#include<iostream>
using namespace std;

/* ------------------------- defining a new datatype ------------------------ */

class Car{
    int price;
    int model_no;
    char name[20];
};


int main(){

/* ----------------------------- creating object ---------------------------- */
Car c;

cout<<sizeof(c)<<endl;
cout<<sizeof(Car)<<endl;

//  NOTE:-
//  -> c is the object.
//  -> Car is the datatype.

}