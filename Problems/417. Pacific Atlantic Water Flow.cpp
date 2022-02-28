class Solution {
    vector<vector<bool>> res, visited; 
    int n , m; 
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    bool a{}, p{}; 
    bool valid(int x, int y) {
        if (x < 0 || y < 0 || x >= n || y>=m  || visited[x][y] == true) {
            return false; 
        }
        return true; 
    }
    void dfs(int x, int y, vector<vector<int>>& heights) {
        visited[x][y] = true; 
        if (x == 0 || y == 0) {
            a = true; 
        }
        if (x == n-1 || y == m-1) {
            p = true; 
        }
        if ((a&&p) || res[x][y]) {
            a = true; 
            p = true; 
        } else {
            for (int i=0; i<DSIZE; ++i) {
                int xx = x + X[i]; 
                int yy = y + Y[i]; 
                if (valid(xx,yy) && heights[x][y] >= heights[xx][yy]) {
                    dfs(xx, yy, heights); 
                }
            }
        }
        visited[x][y] = false; 
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n = heights.size(); 
        m = heights[0].size(); 
        res.resize(n , vector<bool>(m, false)); 
        visited.resize(n , vector<bool>(m, false)); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (!visited[i][j]) {
                    a = false; 
                    p = false; 
                    dfs(i,j,heights); 
                    if (a && p) 
                        res[i][j] = true; 
                }
            }
        }
        vector<vector<int>>ans; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (res[i][j]) {
                    ans.push_back({i,j}); 
                }
            }
        }
        return ans; 
    }
};
