class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n1;
        unordered_set<int> n2;
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int x : nums1) {
            n1.insert(x);
        }
        for (int y : nums2) {
            n2.insert(y);
        }
        for (auto a : n1) {
            mp[a] = a;
        }
        for (int b : n2) {
            if (mp.find(b) != mp.end()) {
                ans.push_back(b);
            }
        }
        return ans;
    }
};