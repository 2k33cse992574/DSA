class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())  return 0;
        unordered_map<char, int> mp;
        int count = 0, maxi = INT_MIN;
        for (int i = 0; i < s.size();) {
            if (mp.find(s[i]) == mp.end()) {
                count++;
                mp[s[i]] = i;
                i++;
            } else {
                i = mp[s[i]] + 1;
                mp.clear();
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};