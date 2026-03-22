class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int sum = 0;
        int x = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            swap(boxTypes[i][0], boxTypes[i][1]);
        }
        sort(boxTypes.begin(), boxTypes.end());
        reverse(boxTypes.begin(), boxTypes.end());
        for (int i = 0; i < boxTypes.size(); i++) {
            x += boxTypes[i][1];
            if (x > truckSize) {
                int d = abs(truckSize - x + boxTypes[i][1]);
                sum += d * boxTypes[i][0];
                break;
            }
            sum += boxTypes[i][1] * boxTypes[i][0];
        }
        return sum;
    }
};