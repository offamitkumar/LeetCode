class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter{}; 
        const int &n = nums.size(); 
        for (int i=0; i<n; i++) {
            counter += count(nums.begin()+i+1, nums.end(), nums[i]); 
        }
        return counter; 
    }
};
