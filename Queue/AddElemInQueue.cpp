#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    

    int n= q.size();
    int position=4;

    for(int i=1; i<=position-1; i++){
        int elem = q.front();
        q.pop();
        q.push(elem);
    }
    q.push(70);

    for(int i=1; i<=q.size()-position; i++){
        int elem =q.front();
        q.pop();
        q.push(elem);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    



    return 0;
}