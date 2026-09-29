class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int len = 0;
        int x = 0;
        while (j < n) {
            mp[s[j]]++;
            x = max(x, mp[s[j]]);
            if ((j - i + 1) - x > k) {
                mp[s[i]]--;
                i++;
            }
            len = max(len, j - i + 1);
            j++;
        }
        return len;
    }
};