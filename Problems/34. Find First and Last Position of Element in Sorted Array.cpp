class Solution {
    int lower_bound(vector<int>&nums, int target) {
        int ans = -1; 
        int low = 0 , high = nums.size()-1; 
        while (low <= high) {
            int mid = (low + high) / 2; 
            if (nums[mid] == target) {
                ans=mid;
            }
            if (nums[mid] < target) {
                low = mid+1;
            } else {
                high = mid-1; 
            }
        }
        return ans; 
    }
    int upper_bound(vector<int>&nums, int target) {
        int ans =-1;
        int low = 0 , high = nums.size()-1; 
        while (low <= high){
            int mid= (low+ high) /2 ; 
            if (nums[mid] == target) {
                ans =mid;
            }
            if (nums[mid] <= target) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return ans; 
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int x = lower_bound(nums, target); 
        int y = upper_bound(nums, target);  
        return {x,y}; 
    }
};
