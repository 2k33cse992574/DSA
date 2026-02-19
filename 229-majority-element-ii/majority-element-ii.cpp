class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        } 
        int x=(n/3);
        for(auto& it:mp)
        {
            if(it.second>x)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};