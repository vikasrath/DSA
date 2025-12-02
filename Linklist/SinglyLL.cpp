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




class linkedlist{   
    public:
    Node *head;
    Node *tail;

    linkedlist(){
        head=nullptr;
        tail=nullptr;
    }

    void InsertAtHead(int data){
        Node *node = new Node(data);
        if (head==nullptr){
            head = node;
            tail=node;
        }else{
            node->next=head;
            head=node;
        }
    }
    void InsertAtLast(int data){
        Node *node = new Node(data);
        if (head==nullptr){
            head = node;
            tail=node;
        }else{
           tail->next=node;
           tail=node;
        }
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
    
    ls.InsertAtLast(40);
    ls.InsertAtLast(50);
    ls.InsertAtLast(60);
    ls.InsertAtLast(70);
    ls.display();

    
    

    return 0;
}