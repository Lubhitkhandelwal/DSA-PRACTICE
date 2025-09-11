#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout<<"Enter number: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0){
            sum += i;
            cout<<i<<endl;
        }
    }

    if (sum == num)
        cout << "Perfect Number" << endl;
    else
        cout << "Not Perfect Number" << endl;

    return 0;
}