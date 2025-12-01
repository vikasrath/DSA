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

   Student x("vikas",20); // static
   Student* s1 = new Student("Vikas Rathore",20); // Dynamic

   s1->print();

   
    return 0;
}