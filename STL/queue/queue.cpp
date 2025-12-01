#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;   // creates an empty queue

    q.push(10);
    q.push(20); 
    q.push(30);

    cout << "Front element: " << q.front() << endl;  // 10
    cout << "Back element: " << q.back() << endl;    // 30
    cout << "Size: " << q.size() << endl;            // 3

    q.pop();  // removes 10 (the front element)

    cout << "After pop, new front: " << q.front() << endl; // 20

    return 0;
}
