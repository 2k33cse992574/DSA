class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int len = 0;
        while (j < n) {
            if (mp.find(s[j]) != mp.end()) {
                while (i <= mp[s[j]]) {
                    mp.erase(s[i]);
                    i++;
                }
            }
            mp[s[j]] = j;
            len = max(len, j - i + 1);
            j++;
        }
        return (len == 1e9) ? 0 : len;
    }
};