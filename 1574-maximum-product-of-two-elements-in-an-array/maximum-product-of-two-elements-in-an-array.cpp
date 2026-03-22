class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int maxii=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi&& count==0)
            {
                count++;
                continue;
            }
            maxii=max(maxii,(maxi-1)*(nums[i]-1));
        }
        return maxii;
    }
};