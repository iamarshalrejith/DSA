#include <iostream>
using namespace std;

// Linear Search Function
int linearSearch(int arr[], int n, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i; // Return the index where the number is found
        }
    }
    return -1; // Return -1 if the number is not found
}

int main() {
    int arr[] = {6, 7, 8, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num;

    cout << "Enter the number to search: ";
    cin >> num;

    int result = linearSearch(arr, n, num);

    if(result != -1) {
        cout << "Number found at index " << result << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
