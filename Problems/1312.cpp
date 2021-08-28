class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>>dp(n , vector<int>(n,0));
        for(int i=0;i<n;++i){
            dp[i][i] = 1;
        }
        for(int i=2; i<=n;++i){
            for(int j=0;j<n-i+1;++j){
                int k=j+i-1;
                if(s[j] == s[k] && i==2){
                    dp[j][k] = 2;
                }else if(s[j] == s[k]){
                    dp[j][k] = dp[j+1][k-1]+2;
                }else{
                    dp[j][k] = max(dp[j][k-1] , dp[j+1][k]);
                }
            }
        }
        return n - dp[0][n-1];
    }
};
