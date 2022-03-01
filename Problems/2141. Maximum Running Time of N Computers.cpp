class Solution {
    bool possible(int64_t n , int64_t span, vector<int>&batteries) {
        int64_t c_time{}; 
        for (auto&itr:batteries) {
            c_time += min((int64_t)itr, span); 
            if (c_time >= n * span) return true; 
        }
        return false; 
    }
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        int64_t ans{}; 
        int64_t low = 0 , high = accumulate(batteries.begin(), batteries.end(), 0ll); 
        while (low <= high) {
            int64_t mid = (low + high)/ (int64_t)2; 
            if (possible(n, mid, batteries)) {
                ans = mid; 
                low = mid+1; 
            } else {
                high = mid-1; 
            }
        }
        return ans;
    }
};
