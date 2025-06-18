#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 =  {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};
    int n1 = arr1.size();
    int n2 = arr2.size();

    set<int> st;
    for(int i = 0;i<n1;i++){
        st.insert(arr1[i]);
    }

    for(int i = 0;i<n2;i++){
        st.insert(arr2[i]);
    }

    vector<int> union_arr;
    for(auto it:st){
        union_arr.emplace_back(it);
    }
    
    //Output
     // Output
    for (int i = 0; i < union_arr.size(); i++) {
        cout << union_arr[i] << " ";
    }

    return 0;

}