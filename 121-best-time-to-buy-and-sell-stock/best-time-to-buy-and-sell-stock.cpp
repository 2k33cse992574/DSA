class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_pr = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            mini = min(mini, prices[i]);
            max_pr = max(max_pr, prices[i] - mini);
        }
        return max_pr;
    }
};