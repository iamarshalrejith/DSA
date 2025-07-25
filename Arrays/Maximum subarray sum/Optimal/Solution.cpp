#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySumKadane(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; ++i) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Kadane's Algorithm Max Subarray Sum: " << maxSubarraySumKadane(arr, n) << endl;
    return 0;
}
