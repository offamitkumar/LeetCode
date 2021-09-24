class Solution {
    int mod = 1e9+7;
public:
    int countSpecialSubsequences(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+10, vector<int>(3));
        const int &n = nums.size(); 
        for (int i=1; i<=n; ++i) {
            dp[i][0] = dp[i-1][0]; 
            dp[i][1] = dp[i-1][1]; 
            dp[i][2] = dp[i-1][2]; 
            if (nums[i-1] == 0) {
                dp[i][0] = ((dp[i-1][0]*2)%mod+1)%mod;
            } else if (nums[i-1] == 1 && dp[i-1][0]) {
                dp[i][1] = ((dp[i-1][0] + (dp[i-1][1]*2ll)%mod)%mod)%mod;
            } else if (nums[i-1] == 2 && dp[i-1][1]){ 
                dp[i][2] = ((dp[i-1][1] + (dp[i-1][2]*2ll)%mod)%mod)%mod; 
            }
        }
        return dp[n][2]; 
    }
};
