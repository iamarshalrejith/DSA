#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>  arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int d = 3;
    d = d%n;
    reverse(arr.begin(),arr.begin()+d); // second one is exclusive
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());

    for(auto it:arr){
         cout << it << " ";
    }

}