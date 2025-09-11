#include <iostream>
using namespace std;
int main() {
  int rows;
  cout<<"ENTER NUMBER OF ROWS: ";
  cin>>rows;
  int columns;
  cout<<"ENTER NUMBER OF COLUMNS: ";
  cin>>columns;
  for(int i=0;i<rows;i++){
    if(i==0||i==rows-1){     //for first and last row
      for(int j=0;j<columns;j++){
        cout<<"*";
      }
      cout<<endl;
    }
    else{                   //for middle rows
      for(int j=0;j<columns;j++){
        if(j==0 || j==columns-1){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
    }
  }
}    