class Solution {
public:
    int twoEggDrop(int n, int k = 2) {
        vector<vector<int>>dp(k+2, vector<int>(n+2)); 
        for (int e=0;e<=k; ++e) {
            for (int f=0; f<=n; ++f) {
                if (e == 0 || f == 0) {
                    dp[e][f] = 0; 
                } else if (e == 1) {
                    dp[e][f] = f; 
                } else if (f == 1) {
                    dp[e][f] = 1; 
                } else {
                    int mx=INT_MAX; 
                    for (int x = 0, y=f-1; x<f; ++x,--y) {
                        int v1 = dp[e-1][x];  // if egg breaks 
                        int v2 = dp[e][y]; 
                        mx= min(mx , max(v1, v2)); 
                    }
                    dp[e][f] = mx+1; 
                }
            }
        }

        return dp[k][n]; 
  
    }
};
