#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int capacity;
    int *arr;

    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[size];
    }

    void push(int elm)
    {
        if (size == capacity)
        {
            capacity = capacity * 2;
            int *arr1 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr1[i] = arr[i];
            }
            delete[] arr;
            arr = arr1;
        }
        arr[size++] = elm;
    }

    void remove()
    {
        if (size == 0)
            cout << "Array is Empty" << endl;
        size--;
    }

    int pop()
    {
        if (size == 0)
            cout << "Array is Empty" << endl;
        return arr[size--];
    }

    void print()
    {
        if (size == 0)
            cout << "Array is Empty" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // My own implementation of a vector in C++
    Vector v;
    v.push(10);
    v.print();
    v.push(20);
    v.print();
    v.push(30);
    v.print();
    v.push(40);
    v.print();

    return 0;
}