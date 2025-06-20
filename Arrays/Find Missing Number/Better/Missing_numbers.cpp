#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 5;
    vector<int> arr = {1,2,4,5}; // N-1 numbers will be here 
 
    //Create a hash map of size N
    int hash[N+1]={0};
    for(int i = 0;i<=N-1;i++){
        hash[arr[i]] = 1;
    }

    //Checking which one has 0 -> missing Number
    for(int i = 1;i<=N;i++){
        if(hash[i]==0){
            cout << "Missing Number is : " << i;
            break;
        }
    }

  
}