#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
  // int arr[]={10,20,30};
  // cout<<*arr<<endl;  
  // int *p=arr;
  // for(int i=0;i<3;i++){
  //   cout<<*(arr+i)<<" ";
  //   cout<<*p<<endl;
  //   p++;
  // }
  int a=10;
  int *p=&a;
  int **q=&p;
  // int ***r=&q;
  cout<<*q<<endl;
  cout<<**q<<endl;
  for(int i=0;i<3;i++){
    // cout<<*(arr+i)<<" ";
    cout<<**q<<endl;
    q++;
  }
  int b=20;
  int c=30;
  swap(&b,&c);
  cout<<"b: "<<b<<" c: "<<c;
}
