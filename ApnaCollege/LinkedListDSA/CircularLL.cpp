#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class CircularList{
    Node* head;
    Node* tail;

    public:
    CircularList(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    void printll(){
        if(head==NULL){
            cout<<"Empty LL";
            return;
        }
        cout<<"CL->"<<head->data<<"->";
        Node* temp = head->next;

        while(temp!=head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"CL";
    }

};



int main(){
    CircularList l1;

    l1.insertAtHead(5);

    l1.printll();

}