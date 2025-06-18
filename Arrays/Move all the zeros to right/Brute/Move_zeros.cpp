#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
    int n = arr.size();
    vector<int> temp;
    //Storing Non-zeos 1,2,3,2,4,5,1
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    //Storing them back in their original array
    for(int i = 0;i<temp.size();i++){
         arr[i] = temp[i];
    }

    //For pushing the zeros -> remaing places will be zeros
   for(int i = temp.size();i<n;i++){
        arr[i] = 0;
   }

   //Output
   for(int i = 0;i<n;i++){
    cout << arr[i] << " ";
   }


}