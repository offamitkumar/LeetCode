class Solution {
public:
    int minDistance(string word1, string word2) {
        int row = word1.size();
        int col = word2.size();
        if((!row) || (!col)){
            return max(row,col);
        }
        vector<vector<int>>dp(row+1 , vector<int>(col+1,0));
        for(int i=0;i<=col;++i){
            dp[0][i] = i;
        }
        for(int i=0;i<=row;++i){
            dp[i][0] = i;
        }
        for(int i=1;i<=row;++i){
            for(int j=1;j<=col;++j){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                }
            }
        }
        return dp[row][col];
    }
};

