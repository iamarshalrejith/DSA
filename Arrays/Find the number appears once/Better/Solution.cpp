#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> arr = {1,1,2,3,3,4,4};
   map<int,int> freq;

   for(int i = 0;i<arr.size();i++){
    freq[arr[i]]++;
   }

   for(auto it:freq){
    if(it.second == 1){
        cout << "The Number that occurs only once is: " << it.first << endl;
    }
   }
}