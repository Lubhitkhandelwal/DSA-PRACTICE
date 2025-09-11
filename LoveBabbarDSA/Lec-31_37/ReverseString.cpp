#include<iostream>
using namespace std;

void reverseString(string& a,int i,int j){
    
    if(i>j){
        return;
    }

    swap(a[i],a[j]);
    i++;
    j--;
    reverseString(a,i,j);

}

int main(){

    string name="Lubhit";

    reverseString(name,0,name.length()-1);

    cout<<name;
}