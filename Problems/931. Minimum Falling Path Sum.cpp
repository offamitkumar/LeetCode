class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        const int &n = matrix.size(); 
        const int &m = matrix.at(0).size(); 
        vector<vector<int>> dp (n , vector<int>(m, 100000)); 
        for (int i=0; i<m; ++i) {
            dp.at(0).at(i) = matrix.at(0).at(i); 
        }
        for (int i=0; i<n-1; ++i) {
            for (int j=0; j<m; ++j) {
                if (j-1>=0) {
                    dp[i+1][j-1] = min(dp[i+1][j-1], dp[i][j] + matrix[i+1][j-1]); 
                } 
                if (j+1<m) {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + matrix[i+1][j+1]); 
                }
                dp[i+1][j] = min(dp[i+1][j] , dp[i][j] + matrix[i+1][j]); 
            }
        }
        return *min_element(dp.at(n-1).begin(), dp.at(n-1).end()); 
    }
};
