class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size()); 
        const int &n = nums.size(); 
        int sum{}; 
        for (int i=0; i<n; ++i) {
            if (i == 0) {
                ans[i] = nums[i]; 
            } else {
                ans[i] = nums[i] +sum; 
            }
            sum+=nums[i]; 
        }
        return ans; 
    }
};
