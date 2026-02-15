class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int l=0,b=0;
        int i=0,j=height.size()-1;
        while(i<=j)
        {
            b=j-i;
            l=min(height[i],height[j]);
            maxi=max(maxi,l*b);
            if(l==height[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxi;
    }
};