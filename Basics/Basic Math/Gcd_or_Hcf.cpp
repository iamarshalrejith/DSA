#include <bits/stdc++.h>
using namespace std;

int main(){
    //Brute force
    int n1 = 20, n2 = 40;
    int gcd = 1;
    for(int i = 1; i <= min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i; // Update gcd to the current divisor
        }
    }
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    //Worst case time complexity: O(n) -> for 11,13 when u loop from 11 to 1 and what if u got same number in n1 and n2
    
    
    //Euclid's algorithm -> gcd(a,b) = gcd(a-b, b) if a > b
    //When one number becomes zero, the other number is the GCD
    
    //Shortcut -> gcd(a, b) = gcd(a%b, b) if a > b   
    //[if a < b, then gcd(a, b) = gcd(b, a)] (or) we do directly gcd(a,b) = gcd(a, b%a) 
   //time complexity: O(log(min(a, b))) -> because we are reducing the problem size by at least half each time

}

