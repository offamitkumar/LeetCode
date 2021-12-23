class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        const int&n = mat.size(); 
        const int&m = mat[0].size(); 
        vector<vector<int>>dp(n,vector<int>(m)); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                for (int x=-k; x<=k; ++x){ 
                    if (i+x>=0 and i+x<n) {
                        int l = max(j-k,0); 
                        int r = j+k+1; 
                        dp[i+x][l] += mat[i][j];  
                        if (r<m) dp[i+x][r]-=mat[i][j]; 
                    }
                }
            }
        }
        for (int i=0; i<n; ++i) {
            int sum{};
            for (int j=0; j<m; ++j) {
                sum+=dp[i][j]; 
                dp[i][j] = sum; 
            }
        }
        return dp;
    }
};
