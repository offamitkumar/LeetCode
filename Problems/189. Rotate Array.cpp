class Solution {
    void reverse(vector<int>&nums , int start, int end) {
        while (start < end) {
            swap(nums[start] , nums[end]); 
            start++; 
            end--; 
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 1) {
            return; 
        }
        std::reverse(nums.begin(), nums.end()); 
        reverse(nums, 0, k-1); 
        reverse(nums, k, nums.size()-1); 
    }
};
