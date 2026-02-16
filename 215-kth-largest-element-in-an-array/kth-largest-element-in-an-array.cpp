class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int last;
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        for(int x:nums)
        {
            pq.push(x);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};