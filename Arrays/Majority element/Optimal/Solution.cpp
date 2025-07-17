#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    int count = 0;
    int element = 0;

    // Step 1: Find candidate
    for (int i = 0; i < arr.size(); i++) {
        if (count == 0) {
            element = arr[i];
            count = 1;
        } else if (arr[i] == element) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    if (count > arr.size() / 2) {
        cout << "Majority element: " << element << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
