#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    
    // creating two arrays
    int mid = s + (e - s) / 2;
    
    int l1 = mid - s + 1;
    int l2 = e - mid;
    
    int *arr1 = new int[l1];
    int *arr2 = new int[l2];

    int k = s;
    for(int i = 0; i < l1; i++){
        arr1[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int i = 0; i < l2; i++){
        arr2[i] = arr[k];
        k++;
    }

    // Merging two arrays
    k = s;
    int i = 0, j = 0;
    while(i < l1 && j < l2){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
        }else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < l1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < l2){
        arr[k] = arr2[j];
        j++;
        k++;
    }

    // Don't forget to delete dynamically allocated arrays
    delete[] arr1;
    delete[] arr2;
}

// recursion help in breaking of array to very smaller scale
void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;

    //sorting lefft array 
    mergeSort(arr, s, mid);

    // sorting right array
    mergeSort(arr, mid + 1, e);

    // merging left and right array
    merge(arr, s, e);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << " :";
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}