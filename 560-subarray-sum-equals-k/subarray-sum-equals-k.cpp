class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int count=0,cur_sum=0;
        for(int i=0;i<n;i++)
        {
            cur_sum+=nums[i];
            if(mp.find(cur_sum-k)!=mp.end())
            {
                count+=mp[cur_sum-k];
            }
            mp[cur_sum]++;
        }
        return count;
    }
};