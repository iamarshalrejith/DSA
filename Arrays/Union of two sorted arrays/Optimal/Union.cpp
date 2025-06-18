#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 =  {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;
    
    vector<int> union_arr;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
             if(union_arr.size() == 0 || union_arr.back()!=arr1[i]){
                union_arr.push_back(arr1[i]);
             }
             i++;
        }
        else{
             if(union_arr.size() == 0 || union_arr.back()!=arr2[j]){
                union_arr.push_back(arr2[j]);
             }
             j++;
        }
    }
    
    //If Remaining element is present when one of the array is done
    //if arr2 is completed
    while(i<n1){
             if(union_arr.size() == 0 || union_arr.back()!=arr1[i]){
                union_arr.push_back(arr1[i]);
             }
             i++;
        }
    
  // if arr1 is completed
    while(j<n2){
             if(union_arr.size() == 0 || union_arr.back()!=arr2[j]){
                union_arr.push_back(arr2[j]);
             }
             j++;
        }



    //Output
      for (int i = 0; i < union_arr.size(); i++) {
        cout << union_arr[i] << " ";
    }

}