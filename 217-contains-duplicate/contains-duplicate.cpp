class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicate;
        for(int i=0;i<nums.size();i++)
        {
            if(duplicate.find(nums[i])!=duplicate.end())
            {
                return true;
            }
            duplicate[nums[i]]++;
        }
        return false;
    }
};