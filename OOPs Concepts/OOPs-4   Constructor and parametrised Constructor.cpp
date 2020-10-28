/* ----------------------------- IMPORTANT NOTES ---------------------------- */

//   - Some special function that C++ classes give you when you create a class/object.
//   - 4 different special function that are always present inside a class.

//      1.)Costructor
//          - hidden but always present inside the class by default.
//          - that is responsible for creating an object.
//          - get called automatically for only once time.
//          - must have the same name as the class name.
//          - Parametrised Constructor
//          - Constructor Overloading :- having more than one constructor with the same name.

//      2.)Copy Constructor
//      3.)Copy Assignment Operator
//      4.)Destructor

/* ---------------------------- PROGRAMMING PART ---------------------------- */
#include<iostream>
#include<cstring>
using namespace std;

class shirt{
private:
    float shirt_price;

public:
    int  shirt_size;
    char shirt_brand[20];
    char shirt_color[20];

/* ------------------------- 1.)Default Constructor ------------------------- */

    //constructor - automatically make a call
    //            - should have the same name as a class name.
    // make some changes in default constructor.
    shirt(){
        cout<< "constructor inside class called automatically...!" <<endl;
    }

/* ----------------------- 2.)Parametrised Constructor ---------------------- */

    //  - creating Parametrised Constructor.
    shirt(float price, int size, char *brand, char *color){
        shirt_price = price;
        shirt_size = size;
        strcpy(shirt_brand, brand);
        strcpy(shirt_color, color);
        
        // Wrong way:-
        // shirt_brand = brand;
        // shirt_color = color;
    }

/* ----------------------- 3.)Parametrised constructor ---------------------- */

    shirt(float price){
        shirt_price = price;
    }

    void display_details(){
        cout<<"price : " <<shirt_price <<endl;
        cout<<"size  : " <<shirt_size <<endl;
        cout<<"brand : " <<shirt_brand <<endl;
        cout<<"color : " <<shirt_color <<endl;
    }

    void price_show(){
        cout<< "price : " <<shirt_price <<endl;
    }
};

int main(){

    //   - creating object of shirt.
    //   - This will make a call 3 times to the constructor function that ia present inside the class.
    //   - If you have N no. of objects then it makes N no. of call. 

    // calling default constructor -This will called default constructor.
    shirt x;

    // calling parametrised constructor -This will call parametrised constructor.
    shirt y(1200, 42,"Puma", "Red");
    y.display_details();

    // calling parametrised constructor .That has only one parameter.
    shirt z(1550.12);
    z.price_show();

}



