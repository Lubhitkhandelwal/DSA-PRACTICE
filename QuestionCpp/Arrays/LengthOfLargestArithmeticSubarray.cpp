#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter "<<" "<<i+1<<" "<<"element: ";
    cin>>arr[i];
  }
  int d=arr[1]-arr[0];  //initial common difference
  int ans=2;            //considering atleast two elements are a part of arithmetic subarray
  int i=0;              //initialising the loop variable
  int c=1;              //considering the first element is a part of arithmetic subarray
  while(i<n){
    if(arr[i+1]-arr[i]==d){ //if the difference between the current element and the previous element is same as the initial common difference
      c++;  //it means the current element is a part of arithmetic subarray so we update its length
            
    //if difference is not equal then we will update our initial difference and reset the counter to 2
    }else{
      d=arr[i+1]-arr[i];
      c=2;
    }
    i++; //updating the loop variable
    ans=max(ans,c); //updating the maximum length of arithmetic subarray everytime loop runs
  }
  cout<<ans;
}

