#include <iostream>
#include <stack>
using namespace std;

void printRevStack(stack<int> s){
    if(s.size()==0) return;
    int top = s.top();
    s.pop();
    printRevStack(s);
    cout << top << " ";
}
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);    
    printRevStack(s);
    return 0;
}
