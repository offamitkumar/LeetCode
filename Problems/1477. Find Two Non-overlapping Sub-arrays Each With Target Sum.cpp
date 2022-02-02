class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        const int&n = arr.size(); 
        vector<int>dp(n,INT_MAX); 
        int sum{}; 
        for (int j=0,i=0; i<n; ++i) {
            sum+=arr[i]; 
            while (sum>target) {
                sum-=arr[j++]; 
            }
            if (sum == target) {
                dp[i] = i-j+1; 
            }
        }
        int res{INT_MAX}; 
        for (int i=0; i<n; ++i) {
            if (dp[i] != INT_MAX) {
                int last = i - dp[i]; 
                if (last >=0 && dp[last] != INT_MAX) {
                    res = min(res, dp[i] + dp[last]); 
                }
            }
            if (i != 0) {
                dp[i] = min(dp[i] , dp[i-1]); 
            }
        }
        if (res == INT_MAX) {
            return -1; 
        } 
        return res; 
    }
};
