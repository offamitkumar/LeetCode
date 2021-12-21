class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        const int&n = nums.size(); 
        if (n < 3) {
            return 0; 
        }
        int last = 0; 
        int counter{}; 
        for (int i=2; i<n; ++i) {
            if (nums[i]-nums[i-1] == nums[i-1]-nums[i-2]) {
                last = last+1; 
            } else {
                last = 0; 
            }
            counter+=last; 
        }
        return counter; 
    }
};

