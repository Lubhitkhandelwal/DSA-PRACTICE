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
  int c=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        cout<<"Min position of element which repeats and have min index: ";
        cout<<i+1;
        c++;
        break;
      }else{
        continue;
      }
    }
  }
  if(c==0){
    cout<<"No repeated elements!!";
  }
}