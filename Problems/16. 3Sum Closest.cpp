class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        int ans=10000000; 
        const int &n = nums.size(); 
        for (int i=0; i<n; ++i) {
            int j=i+1, k=n-1; 
            while (j<k) {
                const int&sum = nums[i] + nums[j] + nums[k]; 
                if (abs(target - sum) < abs(target-ans)) {
                    ans = sum; 
                }
                if (sum > target) {
                    k--; 
                } else {
                    j++; 
                }
            }
        }
        return ans; 
    }
};
