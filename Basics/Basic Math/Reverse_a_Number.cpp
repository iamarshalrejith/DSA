#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7789;
    int RevNum = 0;
    while(n>0){
        int last_digit = n % 10;
        RevNum = RevNum * 10 + last_digit;
        n /= 10;
    }
    cout << "Reversed Number : " << RevNum << endl;
}