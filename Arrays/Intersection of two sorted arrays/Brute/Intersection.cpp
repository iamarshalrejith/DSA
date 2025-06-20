#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> a = {1,2,2,3,3,4,5,6};
   vector<int> b = {2,3,3,5,6,6,7};

   //for answer array
   vector<int> ans;

   //For keeping a track
   int visited[b.size()] = {0};
   
   for(int i = 0;i<a.size();i++){
    for(int j = 0;j<b.size();j++){
        if(a[i]==b[j] && visited[j]==0){
            ans.push_back(a[i]);
            visited[j] = 1;
            break;
        }
        if(b[j]>a[i]) break;
    }

   }

    // Print the answer
    for(int num : ans){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}