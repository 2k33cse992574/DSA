class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)  return 0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=1;
        }
        bool check =false;
        int prev=0;
        int diff=0;
        for(auto& it: mp)
        {
            if(check)
            {
                diff=max(diff,it.first-prev);
            }
            prev=it.first;
            check=true;
        }
       return diff;
    }
};