class Solution {
    unordered_map<int,bool>dp;
    int n; 
    bool backtrack(vector<int>&nums, int index, int target) {
        if (dp.find(target) != dp.end()) {
            return dp[target]; 
        }
        if (target<0 || index >= n) {
            return false; 
        }
        dp[target] = false; 
        for (int i=index; i<n; ++i) {
            if (backtrack(nums, i+1, target-nums[i])) {
                dp[target] = true; 
                break; 
            }
        }
        return dp[target]; 
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(),0); 
        n = nums.size(); 
        if (sum%2 or nums.size()==1) return false; 
        dp[0] = true; 
        return backtrack(nums, 0, sum/2); 
    }
};
