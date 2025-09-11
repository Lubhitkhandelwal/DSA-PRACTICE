#include<iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    //creation of 2-D Array
    int** arr=new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }

    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    //releasing memory
    for(int i=0;i<m;i++){
        delete [] arr[i];
    }
    delete []arr;

}