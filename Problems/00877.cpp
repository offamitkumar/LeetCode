class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        const int &n = piles.size(); 
        vector<vector<pair<int,int>>>dp(n , vector<pair<int,int>>(n)); 
        for (int i=0; i<n; ++i) {
            dp[i][i].first = piles.at(i); 
            dp[i][i].second = 0; 
        }
        for (int k=2; k<=n; ++k) {
            for (int i=0; i<=n-k; ++i) {
                int j = i+k-1; 
                if (dp[i+1][j].second + piles.at(i) > dp[i][j-1].second + piles.at(j)) {
                    dp[i][j].first = piles.at(i) + dp[i+1][j].second; 
                    dp[i][j].second = dp[i+1][j].first;
                } else {
                    dp[i][j].first = piles.at(j) + dp[i][j-1].second; 
                    dp[i][j].second = dp[i][j-1].first;
                }
            }
        }
        return dp[0][n-1].first > dp[0][n-1].second; 
    }
};
