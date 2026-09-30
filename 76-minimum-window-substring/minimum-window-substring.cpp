class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<int, int> mp;
        int right = 0;
        int left = 0;
        int start = 0;
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]++;
        }
        int min_len = 1e9;
        int count = 0;
        while (right < n) {
            if (mp[s[right]] > 0)
                count++;
            mp[s[right]]--;
            while (count == t.size()) {
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    start = left;
                }
                mp[s[left]]++;
                if (mp[s[left]] > 0) {
                    count--;
                }
                left++;
            }
            right++;
        }
        return min_len == 1e9 ? "" : s.substr(start, min_len);
    }
};