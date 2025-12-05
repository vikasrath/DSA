#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int marks;

    Student(){

    }
    Student(string name,int marks){
        this->name=name;
        this->marks=marks;
    }
    Student(int marks){
        this->marks=marks;
    }
    Student operator+(Student s){
        int ans =  this->marks+s.marks;
        Student s4(ans);
        return s4;
    }

    void display(){
        cout<<"Name "<<this->name<<endl<<"Marks "<<this->marks<<endl;
    }
};


int main(){

    Student s1("vikas",80);
    Student s2("Raghav",80);
    Student s3 = s1+s2;
    s3.name="Anshul";
    s1.display();
    s2.display();
    s3.display();


    return 0;
}