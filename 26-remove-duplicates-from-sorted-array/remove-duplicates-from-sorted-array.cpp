class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1;
        int count = 1;
        for (int j = 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                continue;
            } else {
                count++;
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return count;
    }
};