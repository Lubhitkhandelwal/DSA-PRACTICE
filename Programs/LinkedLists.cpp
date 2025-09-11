#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int data){
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    
    Node*temp=new Node(data);
    Node*i=head;
    int cnt=1;
    while(cnt<pos-1){
        i=i->next;
        cnt++;
    }
    
    if(i->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    
    temp->next=i->next;
    i->next=temp;
}



void Print(Node* &head){
    Node* i=head;
    while(i != NULL){
        cout<<i->data<<"->";
        i=i->next;
    }cout<<"NULL"<<endl;
}

int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    
    Node* head=node1;
    Node* tail=node1;
    
    insertAtHead(head,20);
    Print(head);
    
    insertAtTail(tail,30);
    Print(head);
    
    insertAtPosition(head,tail,4,40);
    Print(head);
    
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

}