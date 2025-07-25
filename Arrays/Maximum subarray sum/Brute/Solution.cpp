#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySumBrute(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int currentSum = 0;
            for (int k = i; k <= j; ++k) {
                currentSum += arr[k];
            }
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Brute Force Max Subarray Sum: " << maxSubarraySumBrute(arr, n) << endl;
    return 0;
}
