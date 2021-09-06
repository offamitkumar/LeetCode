class Solution {
public:
    int firstDayBeenInAllRooms(vector<int>& nextVisit) {
        int64_t n = nextVisit.size(); 
        int64_t mod = 1e9+7;
        vector<int64_t>dp(n+1 , 0);
        for (int64_t i=1; i<n; ++i) {
            if (nextVisit[i-1] == i-1) {
                dp[i] = (dp[i-1]+2)%mod;
            } else {
                dp[i] = (dp[i-1] + dp[i-1] - dp[nextVisit[i-1]] + (int64_t)2+mod)%mod;
            }
        }
        return dp[n-1];
    }
};
