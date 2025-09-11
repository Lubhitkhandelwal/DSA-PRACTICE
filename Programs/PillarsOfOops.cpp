#include<iostream>
using namespace std;

class Human{
    public:
    int Height;
    int Weight;
    int Age;

    public:
    int getAge(){
        return this->Age;
    }
    void setWeight(int Weight){
        this->Weight=Weight;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleep"<<endl;
    }
};

class Female: protected Human{
    public:
    string color;

    int getHeight(){
        return this->Height;
    }
};

int main(){
    Male ob1;
    cout<<ob1.Age<<endl;
    cout<<ob1.Weight<<endl;
    cout<<ob1.Height<<endl;

    cout<<ob1.color<<endl;
    ob1.sleep();
    ob1.setWeight(80);
    cout<<ob1.Weight<<endl;
    cout<<"Male End"<<endl;

    Female f1;
    // cout<<f1.Height<<endl;   cant access like this as its protected mode of inheritance
    cout<<f1.getHeight();
}