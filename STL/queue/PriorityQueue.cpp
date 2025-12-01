#include <iostream>
#include <queue>
using namespace std;

int main() {

    // priority_queue store by defoult max element to the top and second max next to it and so on.

    // priority_queue<int> q;   // creates an empty queue
    priority_queue<int,vector<int>,greater<int>> q; // reverse order min at top

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Size: " << q.size() << endl;            // 3
    // q.pop();  // removes 10 (the front element)
    cout << "After pop, new top: " << q.top() << endl; // 20

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    
    return 0;
}
