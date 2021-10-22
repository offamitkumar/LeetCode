class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 2) {
            return 1;
        }
        int inc{1} , de{1}; 
        for (int i=1; i<nums.size(); ++i) {
            if (nums[i] > nums[i-1]) {
                inc = de + 1;
            } else if (nums[i] < nums[i-1]) {
                de = inc + 1; 
            }
        }
        return max(inc , de); 
    }
};

