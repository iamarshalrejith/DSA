#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
    int n = arr.size();
    int i = -1;
    for(int j = 0;j<n;j++){
        if(arr[j]==0){
            i = j;
            break;
        }
    }
    //No i will be pointing at index 1 -> 0
   
    for(int j = i+1;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

    //Output
     for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
   }

}