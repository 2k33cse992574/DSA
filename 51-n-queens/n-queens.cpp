class Solution {
public:
    bool check(vector<string>& mat, int n, int a, int b) {
        for (int j = 0; j < n; j++) {
            if (mat[a][j] == 'Q')
                return false;
        }
        for (int j = 0; j < n; j++) {
            if (mat[j][b] == 'Q')
                return false;
        }
        for (int i = a, j = b; i >= 0 && j >= 0; i--, j--) {
            if (mat[i][j] == 'Q')
                return false;
        }
        for (int i = a, j = b; j < n & i >= 0; j++, i--) {
            if (mat[i][j] == 'Q')
                return false;
        }
        return true;
    }
    void nqueen(vector<vector<string>>& ans, vector<string>& mat, int i,
                int n) {
        if (i == n) {
            ans.push_back({mat});
            return;
        }
        for (int j = 0; j < n; j++) {
            if (check(mat, n, i, j)) {
                mat[i][j] = 'Q';
                nqueen(ans, mat, i + 1, n);
                mat[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> mat(n, string(n, '.'));
        vector<vector<string>> ans;
        nqueen(ans, mat, 0, n);
        return ans;
    }
};