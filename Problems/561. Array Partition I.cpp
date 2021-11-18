class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int sum{}; 
        for (int i=0; i<nums.size(); i+=2) {
            sum += min(nums.at(i), nums.at(i+1));
        }
        return sum; 
    }
};
