class Solution {
    void dfs(int i , int j ,vector<vector<int>>&grid) {
        if (i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] != 1) {
            return ;
        }
        grid[i][j] = 0; 
        const int DSIZE = 4;
        array<int,4>X{-1,1,0,0};
        array<int,4>Y{0,0,-1,1};
        for (int x=0; x<DSIZE; ++x) {
            int r= i+X[x]; 
            int c= j+Y[x]; 
            dfs (r,c,grid); 
        }
    }
    bool isOk(vector<vector<int>> grid) {
        int counter{}; 
        for (int i=0; i<grid.size(); ++i) {
            for (int j=0; j<grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    ++counter; 
                    dfs(i,j,grid); 
                }
            }
        }
        if (counter == 1) {
            return false; 
        }
        return true; 
    }
    public:
    int minDays(vector<vector<int>>& grid) {
        const int &n = grid.size(); 
        const int &m = grid[0].size(); 
        if (isOk(grid)) { return 0; }; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                int counter{}; 
                if (grid[i][j] == 1) {
                    grid[i][j] = 0; 
                    if (isOk(grid)) {
                        return 1; 
                    }
                    grid[i][j] = 1; 
                }
            }
        }
        return 2; 
    }
};
