#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[],int low,int mid,int high){
    int size = high - low + 1;
    int temp[size];
    int left = low;
    int right = mid+1;
    int index = 0;

    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp[index++] = arr[left++];
        }else{
            temp[index++] = arr[right++];
        }
    }
    while(left<=mid){
        temp[index++] = arr[left++];
    }
    while(right<=high){
        temp[index++] = arr[right++];
    }

    for(int i = 0;i<size;i++){
        arr[low+i] = temp[i];
    }

}

void Merge_sort(int arr[],int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    Merge_sort(arr,low,mid);
    Merge_sort(arr,mid+1,high);
    Merge(arr,low,mid,high);
}

int main(){
    int arr[] = {0,1,1,0,0,1,2,1,2,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    Merge_sort(arr,low,high);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}