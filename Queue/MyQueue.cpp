#include<iostream>
#include <vector>
using namespace std;

class Queue{
    public:
    vector<int> v;
    int count=0;

    void push(int num){
        v.push_back(num);
    }
    void pop(){
        if(!v.empty()) count++;
    }
    int size(){
        return v.size()-count;
    }
    int front(){
        if(!v.empty()) return v[count];
        else return -1;
    }
    bool empty(){
        return count >= v.size();
    }



};

int main(){
 
     Queue q;
     q.push(10);
     q.push(20);
     q.push(30);
        cout << "Front element: " << q.front() << endl;  // 10
        cout << "Size: " << q.size() << endl;            // 3
        q.pop();  // removes 10 (the front element)
        cout << "After pop, new front: " << q.front() << endl; //
        

    return 0;
}