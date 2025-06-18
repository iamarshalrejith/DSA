#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 7, 7, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int slargest = INT_MIN; // use INT_MIN to support negative numbers

    for(int i = 1; i < size; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }

    if(slargest == INT_MIN)
        cout << "No second largest element exists.\n";
    else
        cout << "Second Largest: " << slargest << endl;
}
