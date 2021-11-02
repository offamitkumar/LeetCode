class Solution {
    int counter{};
    int fr, fc,n,m; 
    int zero{};
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    void dfs(int r, int c , vector<vector<int>>& grid) {
        for (int i=0; i<DSIZE; ++i) {
            int x = r + X[i]; 
            int y = c + Y[i]; 
            if (x ==fr && y == fc) {
                if (zero == 0) {counter++;}; 
                continue;
            }
            if (x>=0 && y>=0 && x<n && y<m && grid[x][y] != -1) {
                zero--;
                grid[x][y] = -1; 
                dfs(x,y,grid); 
                zero++; 
                grid[x][y] = 0; 
            }
        }
        return ;
    }
    public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        n= grid.size(); 
        m= grid[0].size(); 
        int r,c; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                zero += (grid[i][j]==0); 
                if (grid[i][j] == 1) {
                    r = i; 
                    c = j; 
                } else if(grid[i][j] == 2) {
                    fr = i; 
                    fc = j; 
                }
            }
        }
        grid[r][c] = -1; 
        dfs(r,c,grid);
        grid[r][c] = 1; 
        return counter; 
    }
};

