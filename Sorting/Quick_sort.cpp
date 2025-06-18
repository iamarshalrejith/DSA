#include <bits/stdc++.h>
using namespace std;

int qs(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(i <= high && arr[i] <= pivot){
    i++;
}
    while(j >= low && arr[j] > pivot){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
    }
    swap(arr[j],arr[low]);
    return j;
}

void Quick_sort(int arr[],int low,int high){
    if(low<high){
        int partition_index = qs(arr,low,high);
        Quick_sort(arr,low,partition_index-1);
        Quick_sort(arr,partition_index+1,high);
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    Quick_sort(arr,low,high);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    
 }