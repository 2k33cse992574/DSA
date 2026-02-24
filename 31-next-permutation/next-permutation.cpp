class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=0;
       if(next_permutation(nums.begin(),nums.end()))
       {
          for(int x:nums)
          {
            nums[i]=x;
            i++;
          }
       }
    }
};