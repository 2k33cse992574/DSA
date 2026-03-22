class Solution {
public:
    int squaresum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += pow(n % 10, 2);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n==7)  return true;
        while (n >= 10) {
            n = squaresum(n);
            if(n==7)  return true;
        }
        if (n == 1)
            return true;
        return false;
    }
};