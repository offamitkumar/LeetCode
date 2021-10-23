class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() -1; 
        while (low < high){
            int mid = (high + low) / 2; 
            if (nums[low] < nums[high]) {
                return nums[low];
            }
            if (nums[mid] > nums[high]) {
                low = mid+1;
            } else {
                high = mid;
            }
        }
        return nums[low];
    }
};

