class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        if (k == 0)
            return result;
        int sum = 0;
        if (k > 0) {
            int start = 0, end = k;
            for (int i = start + 1; i < end + 1; i++) {
                sum += code[i];
            }
            result[0] = sum;
            for (int i = 1; i < n; i++) {
                sum -= code[(i) % n];
                sum += code[(end + i) % n];
                result[i] = sum;
            }
        }
        if (k < 0) {
            int start = n - abs(k);
            int end = n - 1;
            for (int i = start; i <= end; i++) {
                sum += code[i];
            }
            result[0] = sum;
            for (int i = 1; i < n; i++) {
                sum -= code[start % n];
                sum += code[(end + 1) % n];
                result[i] = sum;
                start++;
                end++;
            }
        }
        return result;
    }
};