class Solution {
    int partition(vector<int>&nums , int left , int right) {
        int pivot = left + rand()%(- left + right + 1); 
        swap(nums[right], nums[pivot]); 
        for (int i=left; i<right; ++i) {
            if (nums[i] < nums[right]) {
                swap(nums[i] , nums[left++]); 
            }
        }
        swap(nums[left] , nums[right]); 
        return left; 
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        const int &n = nums.size(); 
        int left=0 , right = n - 1; 
        k = n-k; 
        while (left <= right) {
            int p = partition(nums, left , right); 
            if (p == k) {
                break;
            }
            if ( p > k) {
                right = p - 1; 
            } else {
                left = p + 1; 
            }
        }
        return nums[k]; 
    }
};

