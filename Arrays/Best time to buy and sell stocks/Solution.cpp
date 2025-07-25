#include <iostream>
#include <vector>
#include <algorithm> // for std::max and std::min
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            int cost = prices[i] - mini;
            profit = max(cost, profit);
            mini = min(mini, prices[i]); 
        }
        return profit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};  // Sample input
    Solution sol;
    int result = sol.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
