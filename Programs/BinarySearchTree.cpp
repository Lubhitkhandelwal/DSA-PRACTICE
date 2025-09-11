#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertintoBST(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }

    if(data > root->data){
        root->right=insertintoBST(root->right,data);
    }else{
        root->left=insertintoBST(root->left,data);
    }
    return root;
}


void takeinput(Node* root){
    int data;
    cin>>data;

    while(data!=-1){
        insertintoBST(root,data);
        cin>>data;
    }
}



int main(){
    Node* root=NULL;

    cout<<"Enter data to create BST: "<<endl;
    takeinput(root);

}