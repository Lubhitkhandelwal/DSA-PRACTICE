#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int ar[n];
  int a=0;
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>ar[i];
    a=a+ar[i];
  }
  int arr[n];
  for(int i=0;i<n;i++){
    arr[i]=-ar[i];
  }
  int sum[n];
  int s=0;
  sum[0]=arr[0]>0?arr[0]:0;
  for(int i=1;i<n;i++){
    sum[i]=sum[i-1]+arr[i];
    if(sum[i]<0){
      sum[i]=0;
    }
    if(sum[i]>s){
      s=sum[i];
    }
  }
  cout<<"Total sum: "<<a<<endl;
  cout<<"Sum of Non Contributing elements: "<<-s<<endl;
  cout<<"Max sum of a Circular Subarray: "<<a+s; 
}