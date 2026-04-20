class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1;
        int mini = 0, area = 0;
        int maxi = INT_MIN;
        while (i <= j) {
            mini = min(height[i], height[j]);
            area = mini * (j - i);
            maxi = max(maxi, area);
            if (mini == height[i])
                i++;
            else
                j--;
        }
        return maxi;
    }
};