class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int j = 0;
        int sum = 0;
        int cnt = 0;
        while (j < n) {
            sum += nums[j];
            int k1 = (sum % k + k) % k;
            if (mp.find(k1) != mp.end()) {
                cnt += mp[k1];
            }
            mp[k1]++;
            j++;
        }
        return cnt;
    }
};