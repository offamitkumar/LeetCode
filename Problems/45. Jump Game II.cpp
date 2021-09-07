class Solution {
public:
    int jump(vector<int>& nums) {
        int max_reach{}, jumps{}, current_reach{}; 
        for (int i=0; i<nums.size()-1; ++i) {
            if (max_reach < i+nums[i]) {
                max_reach = i + nums[i]; 
            }
            if (current_reach == i) {
                jumps++;
                current_reach = max_reach; 
            }
        }
        return jumps; 
    }
};
