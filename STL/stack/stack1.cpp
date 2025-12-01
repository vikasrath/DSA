#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main()
{
    stack<int> arr;
    

    arr.push(5);
    arr.push(10); // push element to stack
    arr.top();    //  return top element of stack
    arr.emplace(15);
    // arr.pop(); // removes top element
    // arr.size(); // return the size of stack
    // arr.empty(); // return true if stack is empty

    for (int i = 0; i != arr.empty(); i++)
    {
        cout << arr.top() << endl;
        arr.pop();
    }

    return 0;
}
