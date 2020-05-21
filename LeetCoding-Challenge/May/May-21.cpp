class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int result{};
        const int row = (int)matrix.size();
        const int col = (int)matrix[0].size();
        if(matrix.size() ==0){
            return result;
        }
        vector<vector<int>>dp(row , vector<int>(col));
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(!matrix[i][j]){
                    continue;
                }
                if(i==0 || j==0){
                    dp[i][j] = 1;
                }else{
                    dp[i][j] = min({dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1]})+1;
                }
                result+=dp[i][j];
            }
        }
        return result;
    }
};
