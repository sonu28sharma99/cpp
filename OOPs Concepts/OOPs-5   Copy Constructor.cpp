// Copy Constructor:-
//            - used to make a copy of an given object.
//            - exist by default.

#include<iostream>
#include<cstring>
using namespace std;

//Creating class of smartphone.
class Smartphone{

private:
    int price;

public:
    int model_id;
    char model_name[20];
    char brand[20];
    char color[20];

    // This will set the price of the smartphone obj.
    set_price(float n){
        price = n;
    }

    // creating function
    void show_details(){
        cout<< "MODEL ID : " << model_id<<endl;
        cout<< "MODEL NAME : " <<model_name<<endl;
        cout<< "BRAND : " <<brand<<endl;
        cout<< "COLOR : " <<color<<endl;
        cout<< "PRICE : " <<price<<endl;
    }

    // Now creating our own copy Constructor. 'OR'
    // See the implementation of Copy constructor.

    Smartphone(Smartphone &a){
        cout<<"**********COPY CONSTRUCTOR*********"<<endl;
        model_id = a.model_id;
        price = a.price;
        strcpy(model_name, a.model_name);
        strcpy(brand, a.brand);
        strcpy(color, a.color);
        

        /* ******WRONG WAY******
        model_name = a.model_name;
        brand = a.brand;
        color = a.color;
        */
    }

};

int main(){

    Smartphone a;

    cout<<"ENTER DETAILS OF SMARTPHONE :- \n";
    cout<<"MODEL ID : ";
    cin>>a.model_id;
    cout<<"MODEL NAME : ";
    cin>>a.model_name;
    cout<<"BRAND : ";
    cin>>a.brand;
    cout<<"COLOR : ";
    cin>>a.color;

    cout<<"PRICE : ";
    float p;
    cin>>p;
    a.set_price(p);

    // show details of smartphone object
    a.show_details();
    

/* ------------------------ Creating Copy Constructor ----------------------- */
    // Two ways to call a copy constructor.


    // First way
    // NOTE :-
    //     - This will create a new object as the same type as onject 'a'.
    Smartphone b(a);

    b.show_details();


    // Second way
    // NOTE :-
    //    - This will also create a new object of smae type as object 'a'.
    Smartphone c = a;
    
    c.show_details();

}