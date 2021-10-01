class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size()+1 , vector<int>(text2.size()+1)); 
        const int &n = text1.size(); 
        const int &m = text2.size();
        for (int i=1; i<=n; ++i) {
            for (int j=1; j<=m; ++j) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = max(dp[i][j] , dp[i-1][j-1]+1); 
                } else {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[n][m]; 
    }
};
