class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<unsigned long long>>dp(s.length()+1, vector<unsigned long long>(t.length()+1)); 
        for (int64_t i=0; i<s.length(); ++i) {
            dp[i][0] = 1;
        }
        for (int64_t i=1; i<=s.length(); ++i) {
            for (int64_t j=1; j<=t.length(); ++j) {
                if (s[i-1] == t[j-1]) {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1]; 
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[s.length()][t.length()];
    }
};
