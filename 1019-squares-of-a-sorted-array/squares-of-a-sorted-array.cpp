class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }
        int i = neg.size() - 1, j = 0;
        while (i >= 0 && j < pos.size()) {
            if (abs(neg[i]) < abs(pos[j])) {
                ans.push_back(neg[i]);
                i--;
            } else {
                ans.push_back(pos[j]);
                j++;
            }
        }
        while (i >= 0) {
            ans.push_back(neg[i]);
            i--;
        }
        while (j < pos.size()) {
            ans.push_back(pos[j]);
            j++;
        }
        for (int k = 0; k < ans.size(); k++) {
            ans[k] = ans[k] * ans[k];
        }
        return ans;
    }
};