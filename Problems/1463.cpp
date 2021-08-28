class Solution {
    int dp[71][71][71];
    int ans(int i, int b1, int b2, int row, int col, vector<vector<int>>&grid){
        if(b1<0 || b2<0 || b1>=col || b2>=col) return INT_MIN;
        if(i == row ) return 0;
        if(dp[i][b1][b2]!=-1)return dp[i][b1][b2];
        int a = grid[i][b1] + ((b1 == b2)?0:grid[i][b2]);
        int best = 0;
        for(int x=-1;x<2;++x){
            for(int y=-1;y<2;++y){
                best = max(best , ans(i+1,b1+x,b2+y,row,col,grid));
            }
        }
        return dp[i][b1][b2] = a+best;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        memset(dp,-1,sizeof(dp));
        int row = grid.size();
        int col = grid[0].size();
        return ans(0,0,col-1,row,col,grid);
    }
};
