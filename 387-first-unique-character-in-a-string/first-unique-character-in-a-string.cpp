class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        for (int i = 0; i < s.size(); i++) {
            arr[s[i] - 'a']++;
        }
        for (int j = 0; j < s.size(); j++) {
            int x = s[j] - 'a';
            if (arr[x] == 1) {
                return j;
            }
        }
        return -1;
    }
};