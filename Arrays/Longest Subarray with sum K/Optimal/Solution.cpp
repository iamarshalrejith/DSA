#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 3;
    int n = arr.size();

    int left = 0, right = 0;
    long long sum = 0;
    int maxLen = 0;

    while (right < n) {
        sum += arr[right];

        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    cout << "Longest subarray length with sum " << k << " is: " << maxLen << endl;
    return 0;
}
