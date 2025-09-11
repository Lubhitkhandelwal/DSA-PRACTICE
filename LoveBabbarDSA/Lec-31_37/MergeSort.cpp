#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    
    // int mid=s+((e-s)/2);
    int mid=(s+e)/2;

    //creating 2 new array
    int len1=mid-s+1;
    int len2=e-mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    //copying main array after dividing it into half
    int k=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[k];
        k++;
    }

    k=mid+1;  
    for(int i=0;i<len2;i++){
        arr2[i]=arr[k];
        k++;
    }

    //merging 2 sorted arrays
    int i=0;  //pointer of arr1
    int j=0;  //pointer of arr2
    k=s;  //pointer of main array (arr)

    while(i<len1 && j<len2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
        }else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<len1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<len2){
        arr[k]=arr2[j];
        j++;
        k++;
    }

}


void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    // int mid=s+((e-s)/2);
    int mid=(s+e)/2;

    mergeSort(arr,0,mid);

    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}

int main(){
    int n=7;
    int arr[n]={38,27,43,3,9,82,10};

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}