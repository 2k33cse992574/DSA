class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double i = 0, sum = 0;
        while (i < k) {
            sum = sum + nums[i];
            i++;
        }
        double maxi = sum;
        while (i < n) {
            sum = sum - nums[i - k] + nums[i];
            maxi = max(maxi, sum);
            i++;
        }
        return (double)(maxi / k);
    }
};