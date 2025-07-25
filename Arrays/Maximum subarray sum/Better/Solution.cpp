#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySumBetter(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;
        for (int j = i; j < n; ++j) {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Better Approach Max Subarray Sum: " << maxSubarraySumBetter(arr, n) << endl;
    return 0;
}
