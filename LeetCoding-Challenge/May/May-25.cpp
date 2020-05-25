class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        const int row = static_cast<int>(A.size());
        const int col = static_cast<int>(B.size());
        int dp[row+1][col+1];
        memset(dp , 0 , sizeof(dp));
        for(int i=1;i<=row;++i){
            for(int j=1;j<=col;++j){
                if(A[i-1] == B[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }else{
                    dp[i][j] = max({dp[i-1][j] , dp[i-1][j-1],dp[i][j-1]});
                }
            }
        }
        return dp[row][col];
    }
};
