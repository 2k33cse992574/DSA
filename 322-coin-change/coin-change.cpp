class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = amount + 1;
        vector<int> dp(n, INT_MAX);
        dp[0] = 0;
        for (int coin : coins) {
            for (int j = coin; j < amount + 1; j++) {
                if (dp[j - coin] != INT_MAX) {
                    dp[j] = min(dp[j], dp[j - coin] + 1);
                }
            }
        }
        if (dp[amount] != INT_MAX) {
            return dp[amount];
        }
        return -1;
    }
};