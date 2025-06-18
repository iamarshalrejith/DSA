#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7789;
    int copy = n;

    // Calculate number of digits
    int digits = 0, temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }

    // Calculate the sum of each digit raised to 'digits'
    int sum = 0;
    temp = n;
    while(temp > 0){
        int last_digit = temp % 10;
        sum += pow(last_digit, digits);
        temp /= 10;
    }

    if(sum == copy){
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
}
