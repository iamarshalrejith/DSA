#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isGreater(const vector<int>& a, const vector<int>& b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > b[i]) return true;
        if (a[i] < b[i]) return false;
    }
    return false; // Equal
}

void bruteNextPermutation(vector<int> nums) {
    vector<vector<int>> perms;
    sort(nums.begin(), nums.end());
    do {
        perms.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    bool found = false;
    for (int i = 0; i < perms.size(); ++i) {
        if (perms[i] == nums && i + 1 < perms.size()) {
            for (int x : perms[i + 1]) cout << x << " ";
            cout << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        for (int x : perms[0]) cout << x << " ";
        cout << endl;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    cout << "Brute-force next permutation: ";
    bruteNextPermutation(nums);
    return 0;
}
