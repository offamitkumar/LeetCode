class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int &n = prices.size(); 
        vector<int>dp(n); 
        int mxd = 0 - prices[0]; 
        for (int i=1; i<n; ++i) {
            dp[i] = max(dp[i-1] , prices[i] + mxd); 
            mxd = max(mxd ,-prices[i]);
        }
        return dp[n-1];
    }
};
