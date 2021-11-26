class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int counter1{}, counter2{}; 
        const int &n = nums.size();
        for (int i=1; i<n; ++i) {
            counter1+= (nums[i] >= nums[i-1]); 
            counter2+= (nums[i] <= nums[i-1]); 
        }
        return (counter1 == n-1 || counter2 == n-1); 
    }
};
