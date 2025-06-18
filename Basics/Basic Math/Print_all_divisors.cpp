#include <bits/stdc++.h>
using namespace std;

int main(){
    // Approach 1:
    int n = 36; // Example number
    cout << "Divisors of " << n << " are: ";
    for(int i = 1; i<n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    // Time Complexity: O(n)

    cout << endl;
    // Approach 2:
    cout << "Divisors of " << n << " are: ";
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << " ";
            if(i != n / i) {
                cout << n / i << " "; // Print the corresponding divisor
            }
        }
    }
    // Time Complexity: O(sqrt(n))
    cout << endl;
    
}