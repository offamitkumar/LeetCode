class Solution {
    int ans;
    int n , m; 
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    bool okay(int x, int y, vector<vector<int>>&grid) {
        if (x<0 || y<0 || x>=n || y>=m || grid[x][y]==0)
            return false; 
        return true; 
    }
    void dfs(int r, int c , vector<vector<int>>&grid, int counter) {
        int temp = grid[r][c]; 
        grid[r][c]=0; 
        ans = max(counter, ans); 
        for (int i=0; i<DSIZE; ++i){
            int x = r+X[i]; 
            int y = c+Y[i]; 
            if (okay(x,y,grid)) {
                dfs(x,y,grid,counter+grid[x][y]); 
            }
        }
        grid[r][c] = temp; 
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        n = grid.size(); 
        ans = 0; 
        m = grid[0].size(); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid[i][j]) {
                    dfs(i,j,grid,grid[i][j]);
                }
            }
        }
        return ans; 
    }
};
