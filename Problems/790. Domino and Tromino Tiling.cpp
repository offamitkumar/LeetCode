class Solution {
public:
    int numTilings(int n) {
        int mod = 1e9+7;
        vector<int>dp(max(n+1,4));
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2; 
        for (int i=3; i<=n; ++i) {
            dp[i] = (dp[i-3]%mod + (2ll*dp[i-1])%mod)%mod;
        }
        return dp[n];
    }
};
