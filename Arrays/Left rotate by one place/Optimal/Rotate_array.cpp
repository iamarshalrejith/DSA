#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[0];
    for(int i = 1;i<=size-1;i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;
    
    //Left rotated array
    for(int i = 0;i<=size-1;i++){
       cout << arr[i] << " ";
    }
    
}