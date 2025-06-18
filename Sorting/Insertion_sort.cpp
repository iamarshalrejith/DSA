#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int arr[] = {11,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Insertion_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}