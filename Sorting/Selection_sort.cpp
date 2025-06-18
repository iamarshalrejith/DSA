#include <bits/stdc++.h>
using namespace std;


void Selection_sort(int arr[],int n){
    for(int i = 0; i <= n-2;i++){
       int min_index = i;
       for(int j = i;j <= n-1;j++){
              if(arr[j] < arr[min_index]){
                min_index = j;
                
              }   
       }
        swap(arr[i], arr[min_index]);  
    }
    
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    Selection_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}