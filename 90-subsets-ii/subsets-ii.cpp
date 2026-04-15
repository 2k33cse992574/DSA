class Solution {
public:
    void getUniSub(vector<int>& nums, vector<vector<int>>& ans, vector<int>& t,
                   int i) {
        if (i == nums.size()) {
            ans.push_back({t});
            return;
        }
        t.push_back(nums[i]);
        getUniSub(nums, ans, t, i + 1);
        t.pop_back();
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx++;
        }
        getUniSub(nums, ans, t, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t;
        sort(nums.begin(), nums.end());
        getUniSub(nums, ans, t, 0);
        return ans;
    }
};