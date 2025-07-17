#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    unordered_map<int, int> mpp;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > n / 2) {
            cout << "Majority element: " << it.first << endl;
            return 0;
        }
    }

    cout << "No majority element found." << endl;
}
