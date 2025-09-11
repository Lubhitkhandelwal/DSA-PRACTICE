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
  //solving this using kadane's algo, this helps in decresing time complexity to O(n)
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
  cout<<"Max sum of a Subarray: "<<s;
}