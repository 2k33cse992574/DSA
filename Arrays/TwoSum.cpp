//Key Algorithm / Concept:-Hashmap (Value → Index)
//What to Recall:-Complement search using O(n) hash lookup


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(target-nums[i]))
            {
                return {mp[target-nums[i]],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};