class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int l =0ll , h = sqrt(c); 
        while (l <= h) {
            long long int x = (long long)l*l + h*h; 
            if (x == c) {
                return true; 
            } else if (x > c) {
                h--; 
            } else {
                l++; 
            }
        }
        return false; 
    }
};
