class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int &n = prices.size(); 
        if (n ==0) {
            return 0;
        }
        vector<vector<int>>dp(3, vector<int>(n)); 
        for (int i=1; i<3; ++i) {
            int mxd = 0 - prices[0];
            for (int j=1; j<n; ++j) {
                dp[i][j] = max(dp[i][j-1], prices[j]+mxd); 
                mxd = max(mxd , dp[i-1][j] - prices[j]);
            }
        }
        return dp[2][n-1];
    }
};
