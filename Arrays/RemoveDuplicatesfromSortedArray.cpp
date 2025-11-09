//Key Algorithm / Concept:-Two-pointer slow-fast
//What to Recall:-Keep unique index pointer

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
       if (nums.empty()) return 0;
       int j=0;
       for(int i=1;i<n;i++)
       {
        if(nums[i]!=nums[j])
        {
            j++;
            nums[j]=nums[i];
        }
       }
       return j+1;
    }
};
