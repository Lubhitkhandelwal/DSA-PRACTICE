#include<iostream>
#include<stack>
using namespace std;


// Stack implementation using array (Making stack using classes not using inbuilt stack)
class Stack{
    public:
    int top;
    int size;
    int *arr;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int value){
        if(top<size-1){
            top++;
            arr[top]=value;
        }else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top>-1){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top>-1){
            return arr[top];
        }else{
            cout<<"Stack is Empty"<<endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};



int main(){

    Stack st(5);

    st.push(22);
    st.push(27);
    st.push(43);
    st.push(78);
    st.push(52);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    // st.pop();


    // stack<int> s;

    // s.push(10);
    // s.push(20);

    // cout<<s.top()<<endl;
    // s.pop();

    // cout << s.top() << endl;
    // cout<<s.empty()<<endl;

    // s.pop();
    // cout<<s.empty()<<endl;

}