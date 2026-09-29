class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < n) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                i++;
                continue;
            }
            int j = i + 1, k = n - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    int x = nums[j], y = nums[k];
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == x)
                        j++;
                    while (j < k && nums[k] == y)
                        k--;
                } else if ((nums[i] + nums[j] + nums[k]) > 0) {
                    k--;
                } else {
                    j++;
                }
            }
            i++;
        }
        return ans;
    }
};