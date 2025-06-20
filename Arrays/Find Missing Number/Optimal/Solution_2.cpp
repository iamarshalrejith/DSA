#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 5;
    vector<int> arr = {1,2,4,5}; // N-1 numbers will be here 
 
    //Using XOR
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i = 0;i<arr.size();i++){
        XOR1 = XOR1^(i+1);
        XOR2 = XOR2^arr[i];
    }
    XOR1 = XOR1^N;
    int ans = XOR1^XOR2;
    cout << "Missing Number : " << ans;
  
}