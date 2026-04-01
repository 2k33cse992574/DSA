class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> Lis(n,1);
        int maxi = INT_MIN;
        Lis[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] < nums[j]) {
                    Lis[i] = max(Lis[i], 1 + Lis[j]);
                }
            }
        }
        for (int i = 0; i < Lis.size(); i++) {
            maxi = max(maxi, Lis[i]);
        }
        return maxi;
    }
};