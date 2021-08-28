class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        n = (n * (n+1)) /2 ; 
        for(auto&itr:nums) {
            n -= itr;
        }
        return n; 
    }
};
