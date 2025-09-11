// Video22

#include<iostream>
using namespace std;
int main(){
    char name[20];

    cout<<"Enter name: ";
    cin>>name;
    
    cout<<"Your name is "<<name<<endl;;
    
    int len=0;
    for(int i=0;i<10;i++){
        if(name[i]== '\0'){
            break;
        }
        len++;
    }
    cout<<"Length: "<<len<<endl;;
    
    int s=0,e=len-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;e--;
    }
    cout<<"Reversed name: "<<name<<endl;

    
}