class Solution {
public:
    int minLength(string s) {
        string temp = "";
        for (char c : s) {
            temp.push_back(c);
            int n = temp.size();
            if (n >= 2) {
                if (temp[n - 2] == 'A' && temp[n - 1] == 'B' ||
                    temp[n - 2] == 'C' && temp[n - 1] == 'D') {
                    temp.pop_back();
                    temp.pop_back();
                }
            }
        }
        return temp.size();
    }
};