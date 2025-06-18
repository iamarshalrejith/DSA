#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int d = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    d = d%n;  // lets say d = 7 ,total no of elements also 7 so on 7th rotation we get the original array => so we put as d%n = 7%7 = 0 => on o(1) => best case
    vector<int> temp(d);

    //Putting the elements in temp array that has to be rotated
    for(int i = 0;i<d;i++){
        temp[i] = arr[i];
    }
    
    //3,4,5,6,7,_,_
    for(int i = d;i<n;i++){
        arr[i-d] = arr[i];
    }
    
    //we want to store from 5th index how we will get that
    // Now d = 2 after d%n => n = 7 => n-d = > 7-2 = 5
    for(int i = n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
    }
   
   //Left rotated array by d places
   for(int i = 0;i<n;i++){
    cout << arr[i] << " ";
   }


}