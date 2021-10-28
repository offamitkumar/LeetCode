class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) return 1;
        int64_t low =0 , high = x/2+1; 
        while (high - low > 1) {
            int64_t mid = (low + high) /2; 
            if (mid *mid <= (int64_t)x) {
                low = mid; 
            } else {
                high = mid; 
            }
        }
        return low; 
    }
};

