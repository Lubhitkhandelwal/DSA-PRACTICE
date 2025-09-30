#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

    public:
    Queue(){
        head=tail=NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(empty()){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
    }

    void pop(){
        if(empty()){
            cout<<"LL is empty";
            return;
        }
        Node* temp = head;
        head=head->next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout<<"LL is empty";
            return -1;
        }
        return head->val;
    }

    bool empty(){
        return head==NULL;
    }
};


int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}