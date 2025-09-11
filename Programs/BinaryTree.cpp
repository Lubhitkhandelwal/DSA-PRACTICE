#include<iostream>
#include<queue>
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

Node* BuildTree(Node* root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;

    root=new Node(data);
    
    if(data==-1){
        return NULL;
    }
    
    cout<<"Enter data for left of "<<data<<": "<<endl;
    root->left=BuildTree(root->left);
    
    cout<<"Enter data for right of "<<data<<": "<<endl;
    root->right=BuildTree(root->right);
    
    return root;
}

void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);   //seperator
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){  //seperator
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root){

    if(root==NULL){
        return;
    }
    // LNR
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){

    if(root==NULL){
        return;
    }
    // NLR
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){

    if(root==NULL){
        return;
    }
    // LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* buildfromlevelorder(Node* root){
    queue<Node*> q; 


}

int main(){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    Node* root=NULL;
    root=BuildTree(root);

    cout<<"Printing the level order traversal: "<<endl;
    levelorder(root);

    cout<<"Inorder Traversal is: "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal is: "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal is: "<<endl;
    postorder(root);
    cout<<endl;

}