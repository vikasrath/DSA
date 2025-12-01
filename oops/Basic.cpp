#include <iostream>
using namespace std;

class Student
{
public:
    string name = "vikas";
    int age = 19;
    string add = "muktsar";
    Student()
    {
        name = "unknow";
        age = 0;
    }
    Student(string name)
    {
        this->name = name;
    }
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Student(string name, int age, string add)
    {
        this->name = name;
        this->age = age;
        this->add = add;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void getName()
    {
        cout << name << endl;
    }
};

void print(Student s1)
{
    cout << s1.name << endl;
    cout << s1.add << endl;
    cout << s1.age << endl;
}

int main()
{

    Student s1("name", 20, "Bathinda");
    print(s1);

    return 0;
}