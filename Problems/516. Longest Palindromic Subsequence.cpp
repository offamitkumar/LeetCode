class Solution {
public:
    int longestPalindromeSubseq(string s) {
        const int &n = s.size(); 
        vector<vector<int>>dp(n+1, vector<int>(n+1)); 
        for (int i=0; i<n; ++i) {
            dp[i][i] = 1;
        }
        for (int l=2; l<=n; ++l) {
            for (int i=0; i<n-l+1; ++i) {
                int j = i+l-1; 
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i+1][j-1] + 2; 
                } else {
                    dp[i][j] = max(dp[i+1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1]; 
    }
};
