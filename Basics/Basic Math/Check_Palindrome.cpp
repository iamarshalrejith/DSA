#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 123;
    int copy = n; // Store the original number for comparison
    int RevNum = 0;
    while(n>0){
        int last_digit = n % 10;
        RevNum = RevNum * 10 + last_digit;
        n /= 10;
    }
    cout << "Reversed Number : " << RevNum << endl;

    if (copy == RevNum) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
}