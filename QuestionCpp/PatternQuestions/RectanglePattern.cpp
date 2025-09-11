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
    for(int j=0;j<columns;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}    