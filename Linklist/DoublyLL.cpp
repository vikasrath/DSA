#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};




class linkedlist{   
    public:
    Node *head;
    Node *tail;

    linkedlist(){
        head=nullptr;
        tail=nullptr;
    }

    void InsertAtHead(int data){  // ok for  doubly
        Node *node = new Node(data);
        if (head==nullptr){
            head = node;
            tail=node;
        }else{
            node->next=head;
            head=node;
            node->next->prev=node->next;
        }
    }
    void InsertAtLast(int data){  // ok for doubly
        Node *node = new Node(data);
        if (head==nullptr){
            head = node;
            tail=node;
        }else{
           tail->next=node;
           node->prev=tail;
           tail=node;
        }
    }
    
    void deleteAtLast(){
        Node* prvnode=tail->prev;
        prvnode->next=nullptr;
        tail= prvnode;
    }

    void InsertAtMiddle(int idx,int data){
        Node *node = new Node(data);

        if(idx==size()){
            InsertAtLast(data);
            return;
        }else if(idx==0){
            InsertAtHead(data);
            return;
        }

        if(idx <0 || idx>size()){
            cout<<"Invalid Index!"<<endl;
        }

        Node *temp = head;

        for(int i=1; i<idx; i++){
            temp=temp->next;
        }
        Node* temp2=temp->next;
        temp->next=node;
        node->next=temp2;
    }

   
    int size(){
        int count=0;
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            count++;
            temp=temp->next;

        }
        return count;
    }

    void display(){
        Node *temp=head;
        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp=temp->next;

        }
}

};


int main(){
    
    linkedlist ls;
    
    ls.InsertAtHead(30);
    ls.InsertAtHead(20);
    ls.InsertAtHead(10);
    ls.InsertAtLast(40);
    ls.InsertAtLast(50);
    ls.deleteAtLast();
    cout<<ls.tail->data<<endl;
    ls.display();

    
    

    return 0;
}