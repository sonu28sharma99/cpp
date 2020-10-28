/* ---------------------------------- NOTE ---------------------------------- */

// In this program you will learn :-
//          -> Getter and Setter
//          -> public vs private

//  ACCESS SPECIFIERS:-
//         Access means Read & Write.
//         public :- access outside the class.
//         private :- access inside the class.

#include<iostream>
#include<string>
using namespace std;

// creating class of cycle
class cycle{

private:
    float price;

public:                        
    int model_no;
    string model_name;

    // defining a function that print the all details about the cycle.
    void display_details(){
        cout<<"..........Details..............."<<endl;
        cout<< "Model No : "<< model_no <<endl;
        cout<< "Model name : " << model_name <<endl;
        cout<< "Price : " << price <<endl;
    }

    void set_price(float MRP){
        float min_price = 10000;
        if(MRP > min_price)
            price = MRP;
        else
            price = min_price;
    }
};


int main(){

    // creating cycle object
    cycle a;

    cout<< "Enter Model No : ";
    cin>> a.model_no;

    cout<< "Enter Model Name : ";
    cin>>a.model_name;

    cout<< "Enter Price : ";
    float p;
    cin>> p;

    a.set_price(p);

    a.display_details();

}







