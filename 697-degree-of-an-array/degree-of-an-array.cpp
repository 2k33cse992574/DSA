class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (mp1.find(nums[i]) == mp1.end()) {
                mp1[nums[i]] = i;
            }
            mp2[nums[i]] = i;
            freq[nums[i]]++;
        }
        int maxi = 0;
        for (auto& it : freq) {
            maxi = max(maxi, it.second);
        }

        for (auto& it : freq) {
            if (it.second == maxi) {
                ans = min(ans, mp2[it.first] - mp1[it.first] + 1);
            }
        }

        return ans;
    }
};