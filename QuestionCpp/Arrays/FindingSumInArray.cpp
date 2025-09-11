#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr[i];
  }
  int s;
  cout<<"Enter sum: ";
  cin>>s;
  for(int i=0;i<n;i++){
    int a=arr[i];
    int b=0;
    for(int j=i+1;j<n;j++){
      b=b+arr[j];
      if(a+b==s){
        cout<<"Position: ";
        cout<<"["<<i+1<<","<<j+1<<"]"<<endl;
        break;
      }else{
        continue;
      }
    }
  }
}