// #include <iostream>
// using namespace std;
// int main() {
//   int p;
//   cout<<"Enter N: ";
//   cin>>p;
//   int n=p;
//   int a;
//   int b=0;
//   while(n>0){
//     a=n%10;
//     b=b+(a*a*a);
//     // cout<<b<<endl;
//     n=n/10;  
//   }
//   if(b==p){
//     cout<<"An Armstrong Number.";
//   }else{
//     cout<<"Not An Armstrong Number.";
//   }
// }

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int n) {
    int num = n;

    int p = 0;
    int temp = n;
    while (temp > 0) {

      p++;
      temp = temp / 10;
        
    }

    int sum = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, p);
        temp = temp / 10;
    }

    return sum == num;
}

int main() {
    int s = 1;
    int e = 100;

    for (int i = s; i <= e; i++) {
        if (isArmstrongNumber(i)) {
            cout << i << " ";
        }
    }
}
