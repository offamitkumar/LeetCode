class Solution {
public:
    int rob(vector<int>& nums) {
        const int &n = nums.size();
        int take{}, left{};
        for (int i=0; i<n; ++i) {
            if (i==0) {
                take = nums[i];
            } else {
                int current = max(take, nums[i]+left);
                left = take; 
                take = current; 
            }
        }
        return max(left , take);
    }
};
