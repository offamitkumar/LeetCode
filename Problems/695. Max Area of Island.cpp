class Solution {
    int ans,n,m,temp;
    vector<int>X = {0,0,1,-1}; 
    vector<int>Y = {1,-1,0,0};
    bool check(int x, int y , vector<vector<int>>&grid) {
        if ( x < 0 || y < 0 || x >= n || y >= m || grid.at(x).at(y) != 1) {
            return false;
        }
        ++temp;
        return true;
    }
    void dfs(int x, int y , vector<vector<int>>&grid) {
        grid.at(x).at(y) = -1;
        for (int i=0; i<4; ++i) {
            int nx = x + X.at(i); 
            int ny = y + Y.at(i); 
            if (check(nx, ny, grid)) {
                dfs(nx, ny, grid);
            }
        }
    }
    public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        ans = 0;
        n = grid.size(); 
        m = grid.at(0).size();
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid.at(i).at(j) == 1) {
                    temp=1;
                    dfs(i,j,grid);
                    ans = max(ans , temp);
                }
            }
        }
        return ans;
    }
};
