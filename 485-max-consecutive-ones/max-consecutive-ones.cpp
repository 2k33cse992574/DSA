class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count_one = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                count_one++;
            else {
                count_one = 0;
            }
            maxi = max(maxi, count_one);
        }
        return maxi;
    }
};