#include <iostream>
using namespace std;
int main() {
  int n1,n2;
  cout<<"Enter first number: ";
  cin>>n1;
  cout<<"Enter second number: ";
  cin>>n2;
  char operation;
  cout<<"Enter operation to perform: ";
  cin>>operation;
  switch (operation){
    case '+':
      cout<<n1+n2;
      break;
    case'-':
      cout<<n1-n2;
      break;
    case'*':
      cout<<n1*n2;
      break;
    case'/':
      cout<<n1/n2;
      break;
    default: 
      cout<<"Invalid operation";
  }
}  