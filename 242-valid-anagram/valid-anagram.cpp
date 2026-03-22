class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int arr[26];
        for (int i = 0; i < s.size(); i++) {
            arr[tolower(s[i]) - 'a']++;
            arr[tolower(t[i]) - 'a']--;
        }
        for (int i : arr) {
            if (i != 0)
                return false;
        }
        return true;
    }
};