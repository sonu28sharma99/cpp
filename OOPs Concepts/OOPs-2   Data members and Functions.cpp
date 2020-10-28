#include<iostream>
using namespace std;

/* ------------------------- defining a new datatype ------------------------ */
//Defining Class
class Car{

//Access modifier
public:
    int price;
    int model_no;
    char name[20];

    void print_details(){
        cout<< "Price = " << price <<endl;
        cout<< "model_no = " << model_no <<endl;
        cout<< "Name = " << name <<endl;
    }

    float get_discounted_price(float x){
        return x * price;
    }

    //discounted price not updated, so we use another function
    float apply_discount(float discount){
        price = (1.0 - discount) * price;
        return price;
    }
};


int main(){
/* ----------------------------- creating object ---------------------------- */
Car c;

c.price = 100000;
c.model_no = 10101;
c.name[0] = 'A';
c.name[1] = 'U';
c.name[2] = 'D';
c.name[3] = 'I';
c.name[4] = '\0';

//printing object c
cout<< "Price = " << c.price <<endl;
cout<< "model_no = " << c.model_no <<endl;
cout<< "Name = " << c.name <<endl;

//creating discount cupoun
cout<< "Enter the discount you want to give : "<<endl;
float discount;
cin >> discount;

cout<< c.apply_discount(discount) <<endl;

c.print_details();
}