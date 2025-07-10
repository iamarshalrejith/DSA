#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Use two pointers
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Yes" << endl;
            return 0;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "No" << endl;
    return 0;
}
