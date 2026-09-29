class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int sum = 0;
        int len = 1e9;
        while (j < n) {
            sum += nums[j];
            while (sum >= target) {
                sum -= nums[i];
                len = min(len, j - i + 1);
                i++;
            }
            j++;
        }
        return len == 1e9 ? 0 : len;
    }
};