class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>dp(num+1);
        for (int i = 1; i <= num; ++i) {
            dp[i] = dp[i/2]+(i&1);
        }
        return dp;
    }
};
