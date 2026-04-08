class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pr = 0;
        int mini = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            if (prices[i] - mini > 0) {
                max_pr += prices[i] - mini;
                mini = prices[i];
            }
        }
        return max_pr;
    }
};