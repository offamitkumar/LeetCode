class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        const int&n = nums.size(); 
        vector<int>dp(n); 
        dp[0] = 1; 
        for (int i=1; i<n; ++i) {
            if (nums[i] > nums[i-1]) {
                dp[i] = dp[i-1]+1; 
            } else {
                dp[i] = 1; 
            }
        }
        return *max_element(dp.begin(), dp.end()); 
    }
};
