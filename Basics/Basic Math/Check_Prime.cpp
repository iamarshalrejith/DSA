#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    if(n<=1){
        cout << n << " is not a prime number,no prime numbers less than or equal to one" << endl;
    }

    int count = 0;
    for(int i = 1;i*i<n;i++){
        if(n%i==0){
            count++;
          if(i != n/i) {
                count++;
            }
        }
    }
    if(count == 2){
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
}