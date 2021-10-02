class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        const int &n = dungeon.size(); 
        const int &m = dungeon.at(0).size(); 
        vector<vector<int>> dp (n , vector<int>(m)); 
        dp[n-1][m-1] = min(0,dungeon[n-1][m-1]);
        for (int i=n-1; i>=0; --i) {
            for (int j=m-1; j>=0; --j) {
                if (i+1 < n && j +1 < m) {
                    if (max(dp[i+1][j] , dp[i][j+1]) + dungeon[i][j] < 0) {
                        dp[i][j] = max(dp[i+1][j] , dp[i][j+1]) + dungeon[i][j];
                    } else {
                        dp[i][j] = 0; 
                    }
                } else if(i+1 < n) {
                    if (dungeon[i][j] + dp[i+1][j] < 0) {
                        dp[i][j] = dp[i+1][j] + dungeon[i][j]; 
                    } else {
                        dp[i][j] = 0; 
                    }
                } else if(j+1 < m) {
                    if (dungeon[i][j] + dp[i][j+1] < 0) {
                        dp[i][j] = dp[i][j+1] + dungeon[i][j]; 
                    } else {
                        dp[i][j] = 0; 
                    }
                }
            }
        }
        return abs(dp[0][0]) + 1; 
    }
};
