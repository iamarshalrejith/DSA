#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,2,3,3,1,2,2};
    for(int i = 0;i<arr.size();i++){
        int count = 0;
        for(int j = 0;j<arr.size();j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > arr.size()/2) {
            cout << "Majority element : " << arr[i];
            break;
        }
    }
}