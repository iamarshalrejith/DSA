#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "The array is sorted in non-decreasing order." << endl;
        return 0;  // success
    } else {
        cout << "The array is not sorted." << endl;
        return 1;  // error code
    }
}
