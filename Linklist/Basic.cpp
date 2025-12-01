#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }

};

void display(Node *temp){
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}



int main(){

    Node* n1 = new Node(10);
    Node* n2 = new Node(12);
    Node* n3 = new Node(13);
    Node* n4 = new Node(14);
    Node* n5 = new Node(15);
    n1->next= n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    
    display(n1);
    
    

    return 0;
}