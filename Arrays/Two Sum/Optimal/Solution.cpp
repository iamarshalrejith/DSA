#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> seen; // stores {number, index}

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];

        // Check if the complement is already in the map
        if (seen.find(complement) != seen.end()) {
            // Found the pair
            return {seen[complement], i};
        }

        // Store the current number and its index
        seen[arr[i]] = i;
    }

    return {}; // No pair found
}

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    vector<int> result = twoSum(arr, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " + " << arr[result[1]] << " = " << target << endl;
    } else {
        cout << "No such pair exists." << endl;
    }

    return 0;
}
