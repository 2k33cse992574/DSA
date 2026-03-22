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
        }
        for (int i = 0; i < nums.size(); i++) {
            mp2[nums[i]] = i;
        }
        vector<int> arr;
        int maxi = INT_MIN;
        vector<int> maximum;
        int maxim = 0;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for (auto& it : freq) {
            if (it.second >= maxi) {
                maxi = it.second;
                maxim = it.first;
            }
        }
        for (auto& it : freq) {
            if (it.second == maxi) {
                maximum.push_back(it.first);
            }
        }
        for (int i = 0; i < maximum.size(); i++) {
            ans = min(ans, mp2[maximum[i]] - mp1[maximum[i]] + 1);
        }
        return ans;
    }
};