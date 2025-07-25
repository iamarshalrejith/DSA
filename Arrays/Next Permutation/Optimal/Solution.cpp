#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void optimalNextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1]) i--;

    if (i >= 0) {
        // Step 2: Find the next bigger element to swap
        int j = n - 1;
        while (nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the tail part
    reverse(nums.begin() + i + 1, nums.end());

    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3};
    cout << "Optimal next permutation: ";
    optimalNextPermutation(nums);
    return 0;
}
