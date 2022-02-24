class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int counter{}; 
        const int&n = nums.size(); 
        for (int i=0; i<n; ++i) {
            for (int j=i+1; j<n; ++j) {
                if (nums[i] == nums[j] && (i*j)%k==0) {
                    counter++; 
                }
            }
        }
        return counter; 
    }
};
