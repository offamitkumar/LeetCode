class Solution {
        const int DSIZE = 4;
        array<int,4>X{-1,1,0,0};
        array<int,4>Y{0,0,-1,1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>dis(mat.size(), vector<int>(mat[0].size(), INT_MAX)); 
        int n = mat.size(); 
        int m = mat[0].size(); 
        queue<pair<int,int>>q; 
        for ( int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (mat[i][j] == 0) {
                    dis[i][j] = 0; 
                    q.push({i,j}); 
                }
            }
        }
        auto valid = [&](int x, int y) {
            if (x < 0 || y < 0 || x >= n || y>=m )
                return false; 
            return true; 
        };
        while (!q.empty()) {
            auto node = q.front(); q.pop(); 
            for (int i=0; i<DSIZE; ++i) {
                int x = node.first + X[i]; 
                int y = node.second + Y[i]; 
                if (valid(x,y) && dis[x][y] > dis[node.first][node.second]+1) {
                    dis[x][y] = dis[node.first][node.second]+1;
                    q.push({x,y}); 
                }
            }
        }
        return dis; 
    }
};
