#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,4,7,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(int i = 0;i<=size-1;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }

    //For second largest
   int slargest = -1;
   for(int i = 0;i<=size-1;i++){
     if(arr[i]!=largest && slargest<arr[i]){
        slargest = arr[i];
     }
   }

   cout << "Second Largest : " << slargest;

}