class Solution {
    unordered_map<pair<int,int>,int>dp;
    int n; 
    int brute(vector<int>&nums , int target , int index) {
        if (index == n) {
            return (target==0) ? 1 : 0; 
        }
        if (index >n) return 0; 
        if (dp.find({index, target}) != dp.end()) {
            return dp[{index, target}]; 
        }
        return dp[{index, target}] = brute(nums,target+nums[index], index+1) + brute(nums, target-nums[index], index+1); 
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        n =  nums.size(); 
        return brute(nums, target, 0); 
    }
};
