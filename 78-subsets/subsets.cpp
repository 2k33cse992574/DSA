class Solution {
public:
    void getSub(vector<int>& nums, vector<vector<int>>& ans, vector<int>& t,
                int i) {
        if (i == nums.size()) {
            ans.push_back({t});
            return;
        }
        t.push_back(nums[i]);
        getSub(nums, ans, t, i + 1);
        t.pop_back();
        getSub(nums, ans, t, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t;
        getSub(nums, ans, t, 0);
        return ans;
    }
};