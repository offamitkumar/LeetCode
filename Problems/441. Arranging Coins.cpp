class Solution {
public:
    int arrangeCoins(int n) {
        int64_t low =0 , high = 2147483647;
        int64_t x = 2ll * n; 
        int64_t ans=1; 
        while (low <= high) {
            int64_t mid = low + (high - low)/2; 
            if (mid <= (x-mid)/mid) {
                ans = mid; 
                low = mid+1; 
            } else {
                high = mid-1; 
            }
        }
        return ans; 
    }
};
