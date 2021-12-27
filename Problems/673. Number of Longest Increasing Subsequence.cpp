class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        const int&n = nums.size(); 
        vector<int>len(n,1), count(n,1); 
        for (int i = 1; i<n; ++i) {
            for (int j=0; j<i; ++j) {
                if (nums[i] > nums[j]) {
                    if(len[i] <= len[j]) {
                        len[i] = len[j]+1; 
                        count[i] = count[j]; 
                    } else if (len[i] == len[j]+1) {
                        count[i]+=count[j]; 
                    }
                }
            }
        }
        int l=len[0] , ans = count[0]; 
        for (int i=0; i<n; ++i) {
            if (len[i] > l) {
                l = len[i]; 
                ans = count[i]; 
            } else if(len[i] == l) {
                ans += count[i]; 
            }
        }
        return ans; 
    }
};
