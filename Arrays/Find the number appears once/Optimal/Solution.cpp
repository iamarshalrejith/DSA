#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int XOR = 0;
    for(int i = 0;i<n;i++){
        XOR ^=arr[i];
    }
    cout << "The Number that appears once : " << XOR << endl;
}