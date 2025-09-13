#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;

    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail=newNode;

    }

    void pop_front(){
        if(head==NULL){
            cout<<"Empty Linked List";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"Empty Linked List";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void insertNode(int val, int pos){
        if(pos<0){
            cout<<"Invalid Position";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        
        Node* newNode = new Node(val);
        Node* temp = head;
        while(pos>1){
            if(temp==NULL){
                cout<<"Invalid Position";
                return;
            }
            temp = temp->next;
            pos--;
        }

        if(temp->next!=NULL){
            newNode->next = temp->next;
        }else{
            newNode->next = NULL;
        }
        newNode->prev = temp;
        temp->next = newNode;

        if(newNode->next!=NULL){
            temp = temp->next->next;
            temp->prev = newNode;
        }

    }

    void deleteNode(int pos){
        if(!head){
            cout<<"Empty LL";
            return;
        }
        Node* temp = head;
        int i=0;
        while(i<pos && temp!=NULL){
            temp=temp->next;
            i++;
        }
        if(!temp){
            cout<<"Invalid Position";
            return;
        }
        if(temp==head){
            pop_front();
            return;
        }
        if(temp->next==NULL){
            pop_back();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
        

    }

    void removeKey(int key){
        Node* temp = head;
        int pos=0;
        while(temp!=NULL){
            if(temp->data == key){
                Node* nextNode = temp->next; 
                deleteNode(pos);
                temp = nextNode;
                continue;
            }
            temp=temp->next;
            pos++;
        }
    }

    void printll(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp = temp->next;
        }
        cout<<"NULL";
    }

    
};

int main(){
    List l1;
    l1.push_front(5);
    l1.push_front(7);
    l1.push_front(2);
    l1.push_front(8);
    l1.push_front(9);

    l1.push_back(2);
    l1.push_back(10);
    l1.push_back(11);
    

    l1.printll();
    cout<<endl;

    l1.pop_front();

    l1.printll();
    cout<<endl;

    l1.pop_back();
    
    l1.printll();
    cout<<endl;

    l1.insertNode(11,4);
    l1.insertNode(2,3);

    l1.printll();
    cout<<endl;

    l1.removeKey(2);
    l1.printll();
    cout<<endl;
}