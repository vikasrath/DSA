#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main()
{
    stack<int> arr;
    stack<int> s1;                       // Empty stack
    stack<int> s2(s1);                   // Copy stack
    stack<int, vector<int>> s3;          // Using vector
    stack<int, list<int>> s4;            // Using list

    arr.push(5);
    arr.push(10); // push element to stack
    arr.top();    //  return top element of stack
    arr.emplace(15);
    arr.pop(); // removes top element
    arr.size(); // return the size of stack
    arr.empty(); // return true if stack is empty

    cout << "Top element of the stack : " << arr.top() << endl;
    cout << "Size of the Stack : " << arr.size();

    for (int i = 0; i != arr.empty(); i++)
    {
        cout << arr.top() << endl;
        arr.pop();
    }

    return 0;
}
