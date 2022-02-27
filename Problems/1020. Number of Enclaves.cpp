class Solution {
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    bool valid( int x , int y , vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        if (x < 0 || x >= n || y < 0 || y>=m || grid[x][y] == 0) {
            return false; 
        }
        return true; 
    }
    void dfs(int x, int y, vector<vector<int>>& grid) {
        grid[x][y] = 0; 
        for (int i=0; i<DSIZE; ++i) {
            int xx = x+X[i]; 
            int yy = y+Y[i]; 
            if (valid(xx,yy,grid)) {
                dfs(xx,yy,grid); 
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if ((j == 0 || i == 0 || i == n-1 || j == m-1) && grid[i][j]) {
                    dfs(i,j, grid); 
                }
            }
        }
        int counter{}; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid[i][j]) {
                    counter++; 
                }
            }
        }
        return counter; 
    }
};
