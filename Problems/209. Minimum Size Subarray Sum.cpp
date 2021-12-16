class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans{INT_MAX}; 
        int64_t sum{};
        int i{}, j{}; 
        const int&n = nums.size(); 
        while (j<n) {
            sum+=nums[j++]; 
            while (sum>=target){
                ans=min(ans,j-i); 
                sum-=nums[i++]; 
            }
        }
        return ans==INT_MAX ? 0 : ans; 
    }
};
