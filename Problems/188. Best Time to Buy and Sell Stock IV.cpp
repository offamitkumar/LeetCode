class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        const int &n = prices.size(); 
        if (n==0 || k==0) {
            return 0;
        }
        vector<vector<int>>dp(k+1 , vector<int>(n+1));
        for (int i=1; i<k+1; ++i) {
            int maxDiff = 0 - prices[0];
            for (int j=1; j<n; ++j) {
                dp[i][j] = max(dp[i][j-1], prices[j]+maxDiff); 
                maxDiff = max(maxDiff , dp[i-1][j]-prices[j]); 
            }
        }
        return dp[k][n-1];
    }
};
