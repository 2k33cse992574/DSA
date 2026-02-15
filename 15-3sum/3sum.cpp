class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])  continue;
            int k=i+1,j=nums.size()-1;;
            while(k<j)
            {
                if(nums[i]+nums[k]+nums[j]>0) j--;
                else if(nums[i]+nums[k]+nums[j]<0) k++;
                else
                {
                    res.push_back({nums[i],nums[j],nums[k]});
                    while(k<j && nums[k]==nums[k+1]) k++;
                    while(k<j && nums[j]==nums[j-1]) j--;
                    k++;
                    j--; 
                }
            }
        }
        return res;
    }
};