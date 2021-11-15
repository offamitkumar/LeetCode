class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        const int&n = nums1.size(); 
        const int &m = nums2.size(); 
        int ans{}; 
        vector<vector<int>>dp(n , vector<int>(m)); 
        for (int i=0; i<n; ++i) {
            if (nums1[i] == nums2[0]) {
                dp[i][0] = 1; 
                ans = max(ans , dp[i][0]); 
            }
        }
        for (int i=0; i<m; ++i) {
            if (nums2[i] == nums1[0]) {
                dp[0][i] = 1; 
                ans = max(ans , dp[0][i]); 
            }
        }
        for (int i=1; i<n; ++i) {
            for (int j=1; j<m; ++j) {
                if (nums1[i] == nums2[j]) {
                    dp[i][j] = dp[i-1][j-1] + 1; 
                } else {
                    dp[i][j] = 0; 
                }
                ans= max(ans , dp[i][j]); 
            }
        }
        return ans; 
    }
};

