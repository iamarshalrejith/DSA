#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7789;
    int count = 0;
    while(n>0){
        int last_digit = n % 10;
        count++;
        n /= 10;
    }
    cout << "Number of digits: " << count << endl;
}