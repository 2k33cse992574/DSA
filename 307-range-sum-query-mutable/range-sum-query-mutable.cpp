class NumArray {
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
    }
    
    void update(int index, int val) {
        int x;
        if(index==0) x=prefix[0];
        else         x=prefix[index]-prefix[index-1];
        int diff=val-x;
        for(int i=index;i<prefix.size();i++)
        {
           prefix[i]+=diff;
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left==0)  return prefix[right];
        return prefix[right]-prefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */