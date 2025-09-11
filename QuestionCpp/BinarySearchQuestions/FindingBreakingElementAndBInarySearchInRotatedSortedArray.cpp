#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int key, int s, int e) {
    int m;
    while (s <= e) {
        m = s + (e - s) / 2;
        if (arr[m] == key) {
            return m;
        } else if (arr[m] < key) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array (should be greater than 3): ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int s = 0, e = n - 1;
    int m = s + (e - s) / 2;
    while (s < e) {
        if (arr[0] < arr[m]) {
            s = m + 1;
        } else {
            e = m;
        }
        m = s + (e - s) / 2;
    }

    cout << "Breaking point of Reverse Sorted Array: " << arr[e] << endl;

    int pivot = e;
    if (key >= arr[0]) {
        cout << "Index: " << binarySearch(arr, key, 0, pivot);
    } else {
        cout << "Index: " << binarySearch(arr, key, pivot + 1, n - 1);
    }
    return 0;
}
