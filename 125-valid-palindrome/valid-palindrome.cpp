class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        for (int i = 0; i < s.size(); i++) {
            if ((tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') ||
                (tolower(s[i]) >= '0' && tolower(s[i]) <= '9')) {
                k += tolower(s[i]);
            }
        }
        int i = 0, j = k.size() - 1;
        while (i < j) {
            if (k[i] != k[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};