class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0 , j = 0; 
        const int&n = nums.size(); 
        while (j<n) {
            nums[i++] = nums[j++]; 
            if (j<n && nums[j] == nums[j-1]) {
                nums[i++] = nums[j++]; 
            }
            while (j<n && nums[j] == nums[j-1]) {
                ++j; 
            }
        }
        return i; 
    }
};
