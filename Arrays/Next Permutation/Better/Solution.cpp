#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void betterNextPermutation(vector<int> nums) {
    if (next_permutation(nums.begin(), nums.end())) {
        for (int x : nums) cout << x << " ";
    } else {
        sort(nums.begin(), nums.end());
        for (int x : nums) cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3};
    cout << "Better (STL) next permutation: ";
    betterNextPermutation(nums);
    return 0;
}
