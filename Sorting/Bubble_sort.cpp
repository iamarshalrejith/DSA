#include <bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[],int n){
   for(int i = n-1; i>=1;i--){  // This loop is for the number of passes
         for(int j=0;j<i-1;j++){ // This loop is for the comparison of adjacent elements
             if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
             }
         }
   }
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    Bubble_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}