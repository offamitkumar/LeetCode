class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix[0].size(); 
        int n = matrix.size(); 
        vector<vector<int>>dp(n , vector<int>(m)); 
        int bestAns =0;
        for (int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if (i==0 || j==0) {
                    if (matrix[i][j]=='1') {
                        dp[i][j] = 1;
                    }
                } else {
                    if(matrix[i][j]=='1'){
                        dp[i][j] = min({dp[i-1][j] , dp[i-1][j-1], dp[i][j-1]}) +1;
                    }
                }
                bestAns = max(bestAns , dp[i][j]*dp[i][j]);
            }
        }
        return bestAns;
    }
};
