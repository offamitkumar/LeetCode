class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int low = 1 , high = m*n+1; 
        while (low < high) {
            int mid = (high - low)/2 + low; 
            int lesser{}; 
            for (int i=1; i<=m; ++i) {
                lesser += min(n , mid/i);
            }
            if (lesser < k) {
                low = mid+1;
            } else {
                high = mid; 
            }
        }
        return low;
    }
};
