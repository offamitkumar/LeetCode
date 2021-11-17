class Solution {
    const int mod = (1e9)+7; 
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        vector<vector<pair<int64_t,int64_t>>>dp(n , vector<pair<int64_t,int64_t>>(m)); 
        for (int i=0; i<n; ++i) {
            if (i == 0) 
                dp[i][0].first = dp[i][0].second = grid[i][0]; 
            else 
                dp[i][0].first = dp[i][0].second = (dp[i-1][0].second*grid[i][0]);  
        }
        for (int i=0; i<m; ++i) {
            if (i == 0) 
                dp[0][i].first = dp[0][i].second = grid[0][i]; 
            else 
                dp[0][i].first = dp[0][i].second = (dp[0][i-1].second*grid[0][i]);  
        }
        for (int i=1; i<n; ++i) {
            for (int j=1; j<m; ++j) {
                if (grid[i][j] >= 0) {
                    dp[i][j].first = max(dp[i-1][j].first , dp[i][j-1].first) * grid[i][j];  
                    dp[i][j].second = min(dp[i-1][j].second, dp[i][j-1].second) * grid[i][j]; 
                } else {
                    dp[i][j].first = min(dp[i-1][j].second, dp[i][j-1].second) * grid[i][j]; 
                    dp[i][j].second = max(dp[i-1][j].first, dp[i][j-1].first) * grid[i][j]; 
                }
            }
        }
        return (dp[n-1][m-1].first>=0?dp[n-1][m-1].first%mod : -1); 
    }
};
