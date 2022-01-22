class Solution {
    vector<bool>dp; 
    bool solve(int n) {
        for (int i=1; i*i<=n; ++i) {
            if (dp[n-i*i] ==false) {
                return true; 
            }
        }
        return false; 
    }
public:
    bool winnerSquareGame(int n) {
        dp.resize(n+4, false); 
        dp[0] = false; 
        dp[1] = true; 
        dp[2] = false; 
        for (int i=3; i<=n; ++i) {
            dp[i] = solve(i); 
        }
        return dp[n]; 
    }
}; 
