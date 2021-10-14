class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1, 1000000);
        array<int,101>possible;
        possible[0]=0;
        for (int i=1; i<possible.size();++i) {
            possible.at(i) = i*i;
        }
        dp.at(0) = 0;
        for (int i=1; i<=n; ++i) {
            for (int j=1; j<possible.size(); ++j) {
                if (possible.at(j) <=i) {
                    dp.at(i) = min(dp.at(i) , dp[i-possible.at(j)]+1);
                }else {
                    break;
                }
            }
        }
        return dp[n];
    }
};
