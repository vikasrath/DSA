#include<iostream>
#include<string>
using namespace std;

// VIRTUAL FUNCTION EXAMPLE 
// RUNTIME POLYMORPHISM
// Dynamic Binding
// Function Overriding

class Scooty{   
    public:
    int gear=10;

    virtual void sound(){
        cout<<"Wroorm Wroom";
    }
};

class Bike : public Scooty{
    public:
    void sound(){
        cout<<"Broom Broom";
    }

};

int main(){

    // Bike* b1 = new Bike(); // creaded bike using bike class
    // b1->sound();

    
    Scooty* b1 = new Bike(); //created bike but using ptr of scooty
    b1->sound();



    return 0;
}