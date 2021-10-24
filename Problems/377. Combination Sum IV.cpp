class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        long long mod =(1e10+7);
        sort(nums.begin(), nums.end());
        vector<int>dp(target+2); 
        dp[0] = 1; 
        for (int i=1; i<=target; ++i) {
            for (int j=0; j<nums.size() && (i-nums[j])>=0 ; ++j) {
                dp[i] += (dp[i-nums[j]])%mod; 
                dp[i]%=mod;
            }
        }
        return dp[target];
    }
};


