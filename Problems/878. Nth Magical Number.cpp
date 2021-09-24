class Solution {
    int mod = 1e9+7;
    int64_t gcd(int64_t a, int64_t b) {
        if (a == 0) {
            return b;
        }
        return gcd(b%a , a); 
    }
public:
    int nthMagicalNumber(int n, int a, int b) {
        int64_t low = 1 , high = 1e18; 
        int64_t A=a, B=b;
        int64_t lcm = (A*B)/gcd(A,B);
        while (low <= high) {
            int64_t mid = low + (high - low) /(int64_t)2; 
            int64_t total = (mid/A) + (mid/B) - (mid/lcm); 
            if (total == n && (mid%A==0 || mid%B==0)) {
                return mid%mod; 
            }
            if (total<n) {
                low = mid+1; 
            } else {
                high = mid-1;
            }
        }
        return low; 
    }
};
