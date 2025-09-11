#include<iostream>
using namespace std;

// Pass By Value creates a copy of original memory block
void Update1(int n){
    n++;
}

// Pass By Reference performs on original memory block
void Update2(int& n){
    n++;
}


int main(){
    
    
    int i=5;
    cout<<i<<endl;

    // creating a reference variable
    int& j=i;

    i++;
    cout<<i<<endl;

    j++;
    cout<<i<<endl;

    

    int n1=5;
    cout<<"Before:"<<n1<<endl;
    Update1(n1);     //Pass by Value
    cout<<"After:"<<n1<<endl;

    int n2=5;
    cout<<"Before:"<<n2<<endl;
    Update2(n2);     //Pass by Reference
    cout<<"After:"<<n2<<endl;

     

}