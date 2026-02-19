class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>nums1;
        int n=nums.size();
        for(int i=0;i<2*n;i++)
        {
            nums1.push_back(nums[i%n]);
        }
        return nums1;
    }
};