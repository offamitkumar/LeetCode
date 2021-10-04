class Solution {
    int r(int start, vector<int>&nums, int l) {
        const int &n = nums.size();
        int take{}, left{};
        for (int i=start; i<n-l; ++i) {
            int current = max(take , left + nums[i]);
            left = take; 
            take = current;
        }
        return max(take, left);
    }
public:
    int rob(vector<int>& nums) {
        return max({nums[0] , r(0,nums,1), r(1,nums,0)});
    }
};
