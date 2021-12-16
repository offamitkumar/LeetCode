class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1) return 0;
        int counter{}, i{}, j{}, prod{1}; 
        const int&n = nums.size(); 
        while (j<n) {
            prod*=nums[j]; 
            while (prod>=k) prod/=nums[i++]; 
            counter+=1+j++-i; 
        }
        return counter; 
    }
};
