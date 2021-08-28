class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end_ = nums.size()-1;
        while(start <= end_){
            int mid = (start + end_)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                end_ = mid - 1;
            }else if(nums[mid] < target){
                start = mid + 1;
            }
        }
        return start;
    }
};
