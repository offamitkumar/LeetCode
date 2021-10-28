class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 , high = nums.size()-1; 
        while (low<high) {
            int mid = (high+low+1)/2;
            if (nums[mid-1] > nums[mid]) {
                high = mid-1; 
            } else {
                low = mid; 
            }
        }
        return low; 
    }
};

