#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    long long sum = 0;
    int maxLen = 0;

    unordered_map<long long, int> preSumMap;

    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if(sum == k) {
            maxLen = max(maxLen, i + 1);  
        }

        long long rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    cout << "Longest subarray length with sum " << k << " is: " << maxLen << endl;
    return 0;
}
