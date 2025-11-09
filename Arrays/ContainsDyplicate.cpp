//Key Algorithm / Concept:-Hashset check
//What to Recall:-Simple frequency check using unordered_set


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))
            {
                return true;
            }
            mp[nums[i]]++;
        }
        return false;
    }
};