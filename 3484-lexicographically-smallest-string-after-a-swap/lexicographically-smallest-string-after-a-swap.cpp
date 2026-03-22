class Solution {
public:
    string getSmallestString(string s) {
        for (int i = 1; i < s.size(); i++) {
            int x = s[i - 1] - '0';
            int y = s[i] - '0';
            if (((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)) &&
                (x > y)) {
                swap(s[i - 1], s[i]);
                break;
            }
        }
        return s;
    }
};