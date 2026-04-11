class Solution {
public:
    int count(int n) {
        int c = 0;
        while (n != 0) {
            c++;
            n = n / 10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count(nums[i]) % 2 == 0) {
                even++;
            }
        }
        return even;
    }
};