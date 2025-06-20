#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 5;
    vector<int> arr = {1,2,4,5}; // N-1 numbers will be here 
 
    //if we sum from 1 to 5 -> we get 15
    //if we sum up the array -> we get 12 
    //we subtract them we get the missing value 3

    int sum1 = (N*(N+1))/2;
    int sum2 = 0;
    for(int i = 0;i<arr.size();i++){
        sum2 +=arr[i];
    }

    cout << "Missing value is " << sum1-sum2;

  
}