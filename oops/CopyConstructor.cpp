#include<iostream>
#include<string>
using namespace std;


// SHALLOW COPY EXAMPLE (no pointers)
class Student {
public:
    string name;
    int roll;

    Student(){ // defoult constructor
    }
    Student(string name, int roll){  // perameterize constructor
        this->name = name;
        this->roll = roll;
    }

    // // ✅ Copy Constructor (SHALLOW COPY for normal variables) 
    // Student(const Student &obj){
    //     this->name = obj.name;
    //     this->roll = obj.roll;
    // }

    void print(){
        cout << name << " " << roll << endl;
    }
};


// DEEP COPY EXAMPLE (with pointer)

class Demo {
public:
    int* ptr;

    Demo(int x) {
        ptr = new int(x);
    }
    // REAL DEEP COPY 
    Demo(const Demo &d) {
        ptr = new int(*d.ptr);   // new memory
    }

    void print() {
        cout << "Value = " << *ptr << ", Address = " << ptr << endl;
    }
};

int main() {

    // shalow copy constructor
    Student s1("vikas", 20);
    Student s2 = s1; // shallow copy --> called defoult construcot

    s2.name = "amrit";

    cout << "s1: "; s1.print();
    cout << "s2: "; s2.print();


   //------ DEEP COPY (pointer) ------
    Demo d1(50);
    Demo d2 = d1; // deep copy

    cout << "Before change:" << endl;
    d1.print();
    d2.print();

    *d2.ptr = 999;

    cout << "\nAfter change:" << endl;
    d1.print();
    d2.print();

    return 0;
}
