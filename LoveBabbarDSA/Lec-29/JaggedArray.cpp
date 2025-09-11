#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter no of rows:";
    cin>>m;

    int** arr=new int*[m];  
    int* n=new int[m];  //size arrray of each row

    for(int i=0;i<m;i++){
        cout<<"Enter size of row "<<i+1<<" :";
        cin>>n[i];
        arr[i]=new int[n[i]];
    }

    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<n[i];j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0;i<m;i++){
        for(int j=0;j<n[i];j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //releasing memory
    for(int i=0;i<m;i++){
        delete [] arr[i];
    }

    delete []arr;
}