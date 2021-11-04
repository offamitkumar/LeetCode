class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        if(none_of(nums.begin(), nums.end(), [](int x) { return x == 1;})){
            return 1; 
        }
        for (auto &itr: nums) {
            if (itr <= 0 || itr > n) {
                itr = 1; 
            }
        }
        for (auto&itr:nums) {
            int x= abs(itr); 
            if (nums[x-1]>0) nums[x-1]*=-1; 
        }
        for (int i=0; i<n; ++i) {
            if (nums[i] > 0) {
                return i+1; 
            }
        }
        return n+1; 
    }
};
