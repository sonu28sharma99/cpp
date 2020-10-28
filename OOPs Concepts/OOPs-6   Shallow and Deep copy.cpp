// COPY CONSTRUCTOR:-
//              - make a copy of the given object.
//              - exist by default.
//              - can you need you can define your own copy constructor...?
//              - Shallow Copy Constructor.
//              - you can define your own copy constructor if deep copy is needed.
// NOTE:-
//      - By default whn we make a copy constructor, its a shallow copy.
//      - we use deep copy constructor, occasionally. when it is required.

#include<iostream>
#include<cstring>
using namespace std;

// creating class
class car{

private:
    float price;
public:
    int registration_no;
    int manufacture_year;
    char *model_name;    //model_name[20];

    void details(){
        cout<<"Price: "<<price<<endl;
        cout<<"Registration No: "<<registration_no<<endl;
        cout<<"Manufacture Year: "<<manufacture_year<<endl;
        cout<<"Model Name: "<<model_name<<endl;
    }

    // b/c price is private, we create a setter for setting price.
    set_price(float p){
        price = p;
    }

    // because Name is dynamically created.
    car(){
        model_name = NULL;
    }

    // define a parametrised constructor
    car(int p, int reg_no, int mfd, char *model){
        price = p;
        registration_no = reg_no;
        manufacture_year = mfd;
        model_name = new char[strlen(model)+1];
        strcpy(model_name, model);
    }
};

int main(){
    
    // creating object
    car x(10000, 881067, 2015, "BMW");
    x.details();

    // creating objet y, using copy constructor.
    car y(x);

    // changing first letter of the car i.e from BMW to GMW
    y.model_name[0]='G';
    y.details();

}