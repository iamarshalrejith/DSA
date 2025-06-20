#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 5;
    vector<int> arr = {1,2,4,5}; // N-1 numbers will be here 
 
    //We will check the number one by one
    for(int i = 1;i<=N;i++){
        int flag = 0;
        for(int j = 0;j<arr.size();j++){  // arr.size() -> N-1
           if(arr[j]==i){
             flag = 1;
             break;
           }
        }
        if(flag == 0){
          cout << "The missing Number is " << i;
          break;
    }
    }
  
}