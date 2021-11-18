class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        int i=0 , j = k-1; 
        int ans = INT_MAX;  
        while (j<nums.size()) {
            ans = min(ans, nums[j]-nums[i]); 
            i++; 
            ++j; 
        }
        return ans; 
    }
};
