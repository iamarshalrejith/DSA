#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {0,1,1,0,0,1,2,1,2,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cnt0 = 0 , cnt1 = 0 , cnt2 = 0;
    for(int i = 0;i<n;i++){
      if(arr[i]==0){
        cnt0++;
      }
      else if(arr[i]==1){
        cnt1++;
      }
      else{
        cnt2++;
      }
    }

    for(int i = 0;i<cnt0;i++){
        arr[i] = 0;
    }
   
    
    for(int i = cnt0; i < cnt0 + cnt1; i++){
        arr[i] = 1;
    }
        

    for(int i = cnt0 + cnt1; i < n; i++){
       arr[i] = 2;
    }
        

    //Output
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}