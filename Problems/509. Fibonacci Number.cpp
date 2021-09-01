class Solution {
public:
    int fib(int n) { 
        if(n==0) return 0;
        if(n<=2) {
            return 1;
        }
        vector<int>dp(3); 
        dp[0] = 1; 
        dp[1] = 1; 
        n-=2;
        while (n--) {
            dp[2] = dp[1]+dp[0];
            dp[0] = dp[1]; 
            dp[1] = dp[2];
        }
        return dp[2];
    }
};
