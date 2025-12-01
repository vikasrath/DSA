#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;

    Student(string name, int age){
        this->name=name;
        this->age=age;
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->age<<endl;

    }
};

int main(){

   Student x("vikas",20);
   Student* y = &x;
   y->print();
    return 0;
}