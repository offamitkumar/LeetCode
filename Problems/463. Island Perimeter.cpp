class Solution {
    int n , m; 
    int ans;
    bool check(int x, int y , vector<vector<int>>&grid) {
        if (x < 0 || y < 0 || x >= n || y >= m || grid.at(x).at(y) == 0) {
            ++ans;
            return false;
        }
        if (grid.at(x).at(y) == 1) {
            return true;
        } 
        return false; // visited
    }
    vector<int>X{1,-1,0,0};
    vector<int>Y{0,0,1,-1};
    void dfs(int x, int y, vector<vector<int>>&grid) {
        grid.at(x).at(y) = -1; 
        for (int i=0; i<4; ++i) {
            int nx = x+X.at(i); 
            int ny = y+Y.at(i); 
            if (check(nx , ny , grid)) {
                dfs(nx,ny,grid);
            }
        }
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size(); 
        ans = 0;
        m = grid.at(0).size(); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid.at(i).at(j) == 1) {
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};
