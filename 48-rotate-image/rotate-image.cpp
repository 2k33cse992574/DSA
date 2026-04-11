class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (i <= j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            int a = 0, b = matrix[0].size() - 1;
            while (a < b) {
                int temp = matrix[i][a];
                matrix[i][a] = matrix[i][b];
                matrix[i][b] = temp;
                a++;
                b--;
            }
        }
    }
};