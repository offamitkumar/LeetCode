class Solution {
    int m,n;
    int counter{};
    
    int dfs(vector<vector<int>>&g1,vector<vector<int>>&g, int i , int j) {
        if (i>=m || i<0 || j>=n || j<0 || g[i][j]==0) {
            return 1;
        }
        if (g[i][j] == 1 && g1[i][j] == 0) {
            return 0;
        }
        g[i][j] = 0; 
        g1[i][j]= 0;
        int ans = 1;
        ans &=dfs(g1,g,i+1,j); 
        ans &=dfs(g1,g,i,j+1);
        ans &=dfs(g1,g,i-1,j);
        ans &=dfs(g1,g,i,j-1);
        return ans;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        this-> m = grid1.size(); 
        this-> n = grid1[0].size();
        for (int i=0; i<m; ++i) {
            for (int j=0; j<n; ++j) {
                if (grid2[i][j]) {
                    counter+=dfs(grid1,grid2 ,i, j);
                }
            }
        }
        return counter;
    }
};
