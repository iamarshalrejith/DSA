#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    set<int> st;
    for(int i = 0;i<size;i++){
        st.insert(arr[i]);
    }
    
    int index = 0;
    for(auto it:st){
      arr[index] = it;
      index++;
    }

    cout << "No. of Unique Elements: " << index <<  endl;
}