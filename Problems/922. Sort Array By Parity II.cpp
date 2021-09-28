class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0 , j = 0; 
        const int &n = nums.size();
        while (true) {
            while (i < n and (i%2==0 or (nums[i]%2==1 and i%2==1))) {
                ++i;
            }
            while (j < n and (j%2==1 or (nums[j]%2==0 and j%2==0))) {
                ++j;
            }
            if (i >= n or j >= n) {
                break;
            }
            swap(nums[i] , nums[j]);
        }
        return nums; 
    }
};
