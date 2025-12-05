#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;
    stack<int> s2;
    int idx=5;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s2.push(100);

    while (s.size()!=idx-1) {
        s2.push(s.top());
        s.pop();
    }
    s.push(45);

    while (!s2.empty()) {
        s.push(s2.top());
        s2.pop();
    }
   while(!s.empty()){
    cout<<s.top()<< " ";
    s.pop();
   }
    

    return 0;
}
