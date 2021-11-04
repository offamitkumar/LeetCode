class Solution {
    int n,m; 
    vector<vector<bool>>visited;
    
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    bool okay = true; 
    void dfs(int x , int y, vector<vector<int>>&grid) {
        if (x==0 || y == 0 || x==n-1 || y == m-1) {
            okay = false; 
        }
        visited[x][y] = true; 
        for (int i=0; i<DSIZE; ++i) {
            int r = x+X[i]; 
            int c = y+Y[i]; 
            if (r>=0 && c>=0 && r<n && c<m &&visited[r][c]==false && grid[r][c]==0)
                dfs(r,c, grid); 
        }
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size(); 
        m = grid[0].size(); 
        visited.resize(n, vector<bool>(m,false)); 
        int counter{};
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (visited[i][j]==false && grid[i][j]==0) {
                    okay = true; 
                    dfs(i,j, grid); 
                    counter+=okay;
                }
            }
        }
        return counter; 
    }
};

